#include "Alarms_window.hpp" 


/**
 * @brief Construct a new Alarms_window::Alarms_window object
 * @details In the constructor, all signal connections and slots needed for the correct operation of the alarm setting window are set up 
 * 
 * @param parent parten of window
 * @param _state_of_alarms object storing information on the status of alarms
 * @param _silo_number specifies the slos to which the alarm setting window refers
 * @param _window_title stores exactly what you guessed
 */
Alarms_window::Alarms_window(QWidget *parent, State_of_alarms *_state_of_alarms, int _silo_number,QString _window_title): QWidget(parent), Ui::alarms_window(), state_of_alarms(_state_of_alarms),silo_number(_silo_number), window_title(_window_title){

    this->setupUi(this);
    this->setWindowTitle(window_title);

    if(this->silo_number == 1){
        this->horizontalSlider_2->setValue(this->state_of_alarms->get_temp_alarm_silos_1()); // ustawienie wartości slidera poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 1
        this->horizontalSlider->setValue(this->state_of_alarms->get_critical_temp_alarm_silos_1()); // ustawienie wartości slidera poziomu krytycznego w okienku do ustawiania wartości a
        this->spinBox_2->setValue(this->state_of_alarms->get_temp_alarm_silos_1()); // ustawienie wartości spinboxu poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 1
        this->spinBox->setValue(this->state_of_alarms->get_critical_temp_alarm_silos_1()); // ustawienie wartości spinboxu poziomu krytycznego w okienku do ustawiania wartości a
    }

    if(this->silo_number == 2){
        this->horizontalSlider_2->setValue(this->state_of_alarms->get_temp_alarm_silos_2()); // ustawienie wartości slidera poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 2
        this->horizontalSlider->setValue(this->state_of_alarms->get_critical_temp_alarm_silos_2()); // ustawienie wartości slidera poziomu krytycznego w okienku do ustawiania wartości a
        this->spinBox_2->setValue(this->state_of_alarms->get_temp_alarm_silos_2()); // ustawienie wartości spinboxu poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 2
        this->spinBox->setValue(this->state_of_alarms->get_critical_temp_alarm_silos_2()); // ustawienie wartości spinboxu poziomu krytycznego w okienku do ustawiania wartości alarmow temperatury silos 2
    }

    
    
    


    this->connect(this->horizontalSlider,&QSlider::valueChanged,this->spinBox,&QSpinBox::setValue);
    this->connect(this->horizontalSlider_2,&QSlider::valueChanged,this->spinBox_2,&QSpinBox::setValue);

    this->connect(this->spinBox,QOverload<int>::of(&QSpinBox::valueChanged),this->horizontalSlider,&QSlider::setValue);
    this->connect(this->spinBox_2,QOverload<int>::of(&QSpinBox::valueChanged),this->horizontalSlider_2,&QSlider::setValue);
    this->connect(this->buttonBox->button(QDialogButtonBox::Apply),&QPushButton::clicked,this,&Alarms_window::set_alarms);
    this->connect(this->buttonBox->button(QDialogButtonBox::Cancel),&QPushButton::clicked, this,&QWidget::close);

}

/**
 * @brief Slot responsible for writing information about new alarm settings to the state_of_alarms promise responsible for storing information about alarms
 * 
 */

void Alarms_window::set_alarms(){
    if(this->silo_number == 1){
        state_of_alarms->set_critical_temp_alarm_silos_1(this->spinBox->value());
        state_of_alarms->set_temp_alarm_silos_1(this->spinBox_2->value());
    }
    if(this->silo_number == 2){
        state_of_alarms->set_critical_temp_alarm_silos_2(this->spinBox->value());
        state_of_alarms->set_temp_alarm_silos_2(this->spinBox_2->value());
    }
    
    this->close();
}


/**
 * @brief Destroy the Alarms_window::Alarms_window object
 * 
 */
 Alarms_window::~Alarms_window(){}