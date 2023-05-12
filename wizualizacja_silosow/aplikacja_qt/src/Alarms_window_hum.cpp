#include "Alarms_window_hum.hpp"

Alarms_window_hum::Alarms_window_hum(State_of_alarms *_state_of_alarms, 
                                       int _silo_number,
                                       QString _window_title):
                                       
                                       Alarms_window(nullptr,_state_of_alarms,_silo_number,_window_title){
    this->set_up();
                                       }


void Alarms_window_hum::set_up(){
    if(this->silo_number == 1){
        this->horizontalSlider_2->setValue(this->state_of_alarms->get_hum_alarm_silos_1()); // ustawienie wartości slidera poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 1
        this->horizontalSlider->setValue(this->state_of_alarms->get_critical_hum_alarm_silos_1()); // ustawienie wartości slidera poziomu krytycznego w okienku do ustawiania wartości a
        this->spinBox_2->setValue(this->state_of_alarms->get_hum_alarm_silos_1()); // ustawienie wartości spinboxu poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 1
        this->spinBox->setValue(this->state_of_alarms->get_critical_hum_alarm_silos_1()); // ustawienie wartości spinboxu poziomu krytycznego w okienku do ustawiania wartości a
    }

    if(this->silo_number == 2){
        this->horizontalSlider_2->setValue(this->state_of_alarms->get_hum_alarm_silos_2()); // ustawienie wartości slidera poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 2
        this->horizontalSlider->setValue(this->state_of_alarms->get_critical_hum_alarm_silos_2()); // ustawienie wartości slidera poziomu krytycznego w okienku do ustawiania wartości a
        this->spinBox_2->setValue(this->state_of_alarms->get_hum_alarm_silos_2()); // ustawienie wartości spinboxu poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 2
        this->spinBox->setValue(this->state_of_alarms->get_critical_hum_alarm_silos_2()); // ustawienie wartości spinboxu poziomu krytycznego w okienku do ustawiania wartości alarmow temperatury silos 2
    }

    this->connect(this->horizontalSlider,&QSlider::valueChanged,this->spinBox,&QSpinBox::setValue);
    this->connect(this->horizontalSlider_2,&QSlider::valueChanged,this->spinBox_2,&QSpinBox::setValue);

    this->connect(this->spinBox,QOverload<int>::of(&QSpinBox::valueChanged),this->horizontalSlider,&QSlider::setValue);
    this->connect(this->spinBox_2,QOverload<int>::of(&QSpinBox::valueChanged),this->horizontalSlider_2,&QSlider::setValue);
    this->connect(this->buttonBox->button(QDialogButtonBox::Apply),&QPushButton::clicked,this,&Alarms_window_hum::set_alarms);
    this->connect(this->buttonBox->button(QDialogButtonBox::Cancel),&QPushButton::clicked, this,&QWidget::close);

}


void Alarms_window_hum::set_alarms(){

    if(this->silo_number == 1){
        state_of_alarms->set_critical_hum_alarm_silos_1(this->spinBox->value());
        state_of_alarms->set_hum_alarm_silos_1(this->spinBox_2->value());
    }
    if(this->silo_number == 2){
        state_of_alarms->set_critical_hum_alarm_silos_2(this->spinBox->value());
        state_of_alarms->set_hum_alarm_silos_2(this->spinBox_2->value());
    }
    
    this->close();
}

Alarms_window_hum::~Alarms_window_hum(){}