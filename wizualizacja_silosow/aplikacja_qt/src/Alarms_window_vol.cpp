#include "Alarms_window_vol.hpp"

/**
 * @brief Construct a new Alarms_window_vol::Alarms_window_vol object
 * 
 * @param _state_of_alarms //<! alarms values
 * @param _silo_number 
 * @param _window_title 
 */

Alarms_window_vol::Alarms_window_vol(State_of_alarms *_state_of_alarms, 
                                       int _silo_number,
                                       QString _window_title):
                                       
                                       Alarms_window(nullptr,_state_of_alarms,_silo_number,_window_title){
    this->set_up();
                                       }


/**
 * @brief The method takes the current stored alarm values and sets the slider and spinbox values according to them.    
 *  It then connects the corresponding signals and sliders together for correct operation of the window
 * 
 */

void Alarms_window_vol::set_up(){
    if(this->silo_number == 1){
        this->horizontalSlider_2->setValue(this->state_of_alarms->get_fulfillment_alarm_silos_1()); // ustawienie wartości slidera poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 1
        this->horizontalSlider->setValue(this->state_of_alarms->get_critical_fulfillment_alarm_silos_1()); // ustawienie wartości slidera poziomu krytycznego w okienku do ustawiania wartości a
        this->spinBox_2->setValue(this->state_of_alarms->get_fulfillment_alarm_silos_1()); // ustawienie wartości spinboxu poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 1
        this->spinBox->setValue(this->state_of_alarms->get_critical_fulfillment_alarm_silos_1()); // ustawienie wartości spinboxu poziomu krytycznego w okienku do ustawiania wartości a
    }

    if(this->silo_number == 2){
        this->horizontalSlider_2->setValue(this->state_of_alarms->get_fulfillment_alarm_silos_2()); // ustawienie wartości slidera poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 2
        this->horizontalSlider->setValue(this->state_of_alarms->get_critical_fulfillment_alarm_silos_2()); // ustawienie wartości slidera poziomu krytycznego w okienku do ustawiania wartości a
        this->spinBox_2->setValue(this->state_of_alarms->get_fulfillment_alarm_silos_2()); // ustawienie wartości spinboxu poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 2
        this->spinBox->setValue(this->state_of_alarms->get_critical_fulfillment_alarm_silos_2()); // ustawienie wartości spinboxu poziomu krytycznego w okienku do ustawiania wartości alarmow temperatury silos 2
    }

    this->connect(this->horizontalSlider,&QSlider::valueChanged,this->spinBox,&QSpinBox::setValue);
    this->connect(this->horizontalSlider_2,&QSlider::valueChanged,this->spinBox_2,&QSpinBox::setValue);

    this->connect(this->spinBox,QOverload<int>::of(&QSpinBox::valueChanged),this->horizontalSlider,&QSlider::setValue);
    this->connect(this->spinBox_2,QOverload<int>::of(&QSpinBox::valueChanged),this->horizontalSlider_2,&QSlider::setValue);
    this->connect(this->buttonBox->button(QDialogButtonBox::Apply),&QPushButton::clicked,this,&Alarms_window_vol::set_alarms);
    this->connect(this->buttonBox->button(QDialogButtonBox::Cancel),&QPushButton::clicked, this,&QWidget::close);

}

/**
 * @brief Writes new, user-selected alarm values to the state_of_alarms object
 * 
 */

void Alarms_window_vol::set_alarms(){

    if(this->silo_number == 1){
        state_of_alarms->set_critical_fulfillment_alarm_silos_1(this->spinBox->value());
        state_of_alarms->set_fulfillment_alarm_silos_1(this->spinBox_2->value());
    }
    if(this->silo_number == 2){
        state_of_alarms->set_critical_fulfillment_alarm_silos_2(this->spinBox->value());
        state_of_alarms->set_fulfillment_alarm_silos_2(this->spinBox_2->value());
    }
    
    this->close();
}
/**
 * @brief Destroy the Alarms_window_vol::Alarms_window_vol object
 * 
 */

Alarms_window_vol::~Alarms_window_vol(){}