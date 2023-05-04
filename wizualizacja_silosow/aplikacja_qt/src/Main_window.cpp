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
    this->temp_silos_1->set_state_of_alarms(state_of_alarms);

    
    
    this->timer.setInterval(100);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::silos_data_update);

    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_all_param_silos_1);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_all_param_silos_1_fullfilmnet_text);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_all_param_silos_2);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_all_param_silos_2_fullfilmnet_text);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_info_alarms_temp_silos_1);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_temp_silos_1);

    this->connect(this->temp_alarms_settings_button_silos_1,&QPushButton::clicked,this,&Main_window::show_temp_settings_silos_1);
    this->timer.start();    
   
}   



/**
 * @brief Slots for actaulates the parameter values of silo 1 and silo 2 ( fulfilment, temperature, humidity) 
 * 
 */
void Main_window::silos_data_update(){
    auto silos = data->get_data_silos_1();
    for(int i = 0; i < silos.size(); i++){
        this->silos_1[i] = static_cast<int>(silos[i]);
    }
    silos = data->get_data_silos_2();
    for(int i = 0; i < silos.size(); i++){
        this->silos_2[i] = static_cast<int>(silos[i]);
    }
 
}





/**
 * @brief Stot for update all parameters on first silo in All param tab
 * 
 */

void Main_window::set_all_param_silos_1(){
    this->all_param_silos_1->data_refresh(silos_1[0],silos_1[1],silos_1[2],silos_1[3],silos_1[4]);
}

/**
 * @brief Stot for update all parameters on second silo in All param tab
 * 
 */
void Main_window::set_all_param_silos_2(){
    this->all_param_silos_2->data_refresh(silos_2[0],silos_2[1],silos_2[2],silos_2[3],silos_2[4]);
}


/**
 * @brief Slot for update text information about fullfilment of first silo in  All param tab
 * 
 */

void Main_window::set_all_param_silos_1_fullfilmnet_text(){
    this->volume_info_al_1->setText(QString::number(silos_1[0]) + " %");
 }


/**
 * @brief Slot for update text information about fullfilment of second silo in  All param tab
 * 
 */

void Main_window::set_all_param_silos_2_fullfilmnet_text(){
    this->volume_info_al_2->setText(QString::number(silos_2[0]) + " %");
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
 * @brief Slot for setting temperature alarm information in the temperature tab and all parameters. sets text information and the alarm icon
 * 
 */
void Main_window::set_info_alarms_temp_silos_1(){
    if(silos_1[1] < state_of_alarms->get_temp_alarm_silos_1()){
        this->temp_info_alarms_temp_1->setText("Temperatury w normie");
        this->temp_ico_temp_1->setPixmap(QPixmap(":/ok.png"));
        this->temp_info_alarms_al_1->setText("Temperatury w normie");
        this->temp_ico_al_1->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_1[1] > state_of_alarms->get_temp_alarm_silos_1()){
        this->temp_info_alarms_temp_1->setText("Przekroczono wartość ostrzegawczą");
        this->temp_ico_temp_1->setPixmap(QPixmap(":/ikona_warning.png"));
        this->temp_info_alarms_al_1->setText("Przekroczono wartość ostrzegawczą");
        this->temp_ico_al_1->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_1[1] > state_of_alarms->get_critical_temp_alarm_silos_1()){
        this->temp_info_alarms_temp_1->setText("Przekroczono wartość krytyczną");
        this->temp_ico_temp_1->setPixmap(QPixmap(":/ikona_stop.png"));
        this->temp_info_alarms_al_1->setText("Przekroczono wartość krytyczną");
        this->temp_ico_al_1->setPixmap(QPixmap(":/ikona_stop.png"));
    }
}


void Main_window::set_temp_silos_1(){
    this->temp_silos_1_first->setText(QString::number(this->silos_1[1]) + " °C");
    this->temp_silos_1_second->setText(QString::number(this->silos_1[2]) + " °C");
    this->temp_silos_1->set_temperature(this->silos_1[1],this->silos_1[2]);
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
