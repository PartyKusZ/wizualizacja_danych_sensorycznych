#include "Main_window.hpp"
 /**
 * @brief Construct a new Main_window object
 * 
 * @param parent parent widget
 * @param data data recived form serial port
 */

Main_window::Main_window(QWidget *parent,Data *_data): data(_data), Ui::Main_window(), QWidget(parent){

    this->state_of_alarms = new State_of_alarms;

    this->temp_alarms_settings_1 = new QWidget(nullptr);
    this->temp_alarms_settings_ui_1 = new Ui::temp_alarms_window;
    temp_alarms_settings_ui_1->setupUi(temp_alarms_settings_1);


    this->setupUi(this);
    
    
    this->timer.setInterval(100);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_all_param_silos_1);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_all_param_silos_1_fullfilmnet_text);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_all_param_silos_2);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_all_param_silos_2_fullfilmnet_text);
    this->connect(this->temp_alarms_settings_button_silos_1,&QPushButton::clicked,this,&Main_window::show_temp_settings_silos_1);
    this->timer.start();    
   
}   

/**
 * @brief Stot for update all parameters on first silo in All param tab
 * 
 */

void Main_window::set_all_param_silos_1(){
    auto silos = data->get_data_silos_1();
    this->all_param_silos_1->data_refresh(silos[0],silos[1],silos[2],silos[3],silos[4]);
}

/**
 * @brief Stot for update all parameters on second silo in All param tab
 * 
 */
void Main_window::set_all_param_silos_2(){
    auto silos = data->get_data_silos_2();
    this->all_param_silos_2->data_refresh(silos[0],silos[1],silos[2],silos[3],silos[4]);
}


/**
 * @brief Slot for update text information about fullfilment of first silo in  All param tab
 * 
 */

void Main_window::set_all_param_silos_1_fullfilmnet_text(){
    auto silos = data->get_data_silos_1();
    this->volume_info_al_1->setText(QString::number(silos[0]) + " %");
 }


/**
 * @brief Slot for update text information about fullfilment of second silo in  All param tab
 * 
 */

void Main_window::set_all_param_silos_2_fullfilmnet_text(){
    auto silos = data->get_data_silos_2();
    this->volume_info_al_2->setText(QString::number(silos[0]) + " %");
 }

/**
 * @brief Responsible for displaying a window allowing the temperature alarm values for silo number 1 to be edited.
 * 
 * @details Inside it there are connections of grarf elements such as sliders and spinboxes, there is also a connection with the slot that sets alarm values in the state_of_alarms class, storing alarm values.
 * 
 */
void Main_window::show_temp_settings_silos_1(){
    
    temp_alarms_settings_1->connect(temp_alarms_settings_ui_1->horizontalSlider,&QSlider::valueChanged,temp_alarms_settings_ui_1->spinBox,&QSpinBox::setValue);
    temp_alarms_settings_1->connect(temp_alarms_settings_ui_1->horizontalSlider_2,&QSlider::valueChanged,temp_alarms_settings_ui_1->spinBox_2,&QSpinBox::setValue);

    temp_alarms_settings_1->connect(temp_alarms_settings_ui_1->spinBox,QOverload<int>::of(&QSpinBox::valueChanged),temp_alarms_settings_ui_1->horizontalSlider,&QSlider::setValue);
    temp_alarms_settings_1->connect(temp_alarms_settings_ui_1->spinBox_2,QOverload<int>::of(&QSpinBox::valueChanged),temp_alarms_settings_ui_1->horizontalSlider_2,&QSlider::setValue);
    temp_alarms_settings_1->connect(temp_alarms_settings_ui_1->buttonBox->button(QDialogButtonBox::Apply),&QPushButton::clicked,this,&Main_window::set_alarms_temp_silos_1);
    temp_alarms_settings_1->connect(temp_alarms_settings_ui_1->buttonBox->button(QDialogButtonBox::Cancel),&QPushButton::clicked, temp_alarms_settings_1,&QWidget::close);

    temp_alarms_settings_1->show();

}

/**
 * @brief Slot that writes into the state_from_alarams class the temperature alarm values of silo number 1
 * 
 */
void Main_window::set_alarms_temp_silos_1(){
    state_of_alarms->set_critical_temp_alarm_silos_1(temp_alarms_settings_ui_1->spinBox->value());
    state_of_alarms->set_temp_alarm_silos_1(temp_alarms_settings_ui_1->spinBox_2->value());
    temp_alarms_settings_1->close();
}


/**
 * @brief Destroy the Main_window::Main_window object
 * 
 */
Main_window::~Main_window(){
    delete this->state_of_alarms;
    delete this->temp_alarms_settings_1;
    delete this->temp_alarms_settings_ui_1;
}
