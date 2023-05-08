#include "Temp_settings_window.hpp" 

Temp_settings_window::Temp_settings_window(QWidget *parent, State_of_alarms *_state_of_alarms, int _silo_number): QWidget(parent), Ui::temp_alarms_window(), state_of_alarms(_state_of_alarms),silo_number(_silo_number){

    this->setupUi(this);


    this->horizontalSlider_2->setValue(this->state_of_alarms->get_temp_alarm_silos_1()); // ustawienie wartości slidera poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 1
    this->horizontalSlider->setValue(this->state_of_alarms->get_critical_temp_alarm_silos_1()); // ustawienie wartości slidera poziomu krytycznego w okienku do ustawiania wartości a
    this->horizontalSlider_2->setValue(this->state_of_alarms->get_temp_alarm_silos_2()); // ustawienie wartości slidera poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 2
    this->horizontalSlider->setValue(this->state_of_alarms->get_critical_temp_alarm_silos_2()); // ustawienie wartości slidera poziomu krytycznego w okienku do ustawiania wartości a
    this->spinBox_2->setValue(this->state_of_alarms->get_temp_alarm_silos_1()); // ustawienie wartości spinboxu poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 1
    this->spinBox->setValue(this->state_of_alarms->get_critical_temp_alarm_silos_1()); // ustawienie wartości spinboxu poziomu krytycznego w okienku do ustawiania wartości a
    this->spinBox_2->setValue(this->state_of_alarms->get_temp_alarm_silos_2()); // ustawienie wartości spinboxu poziomu ostrzegawczego w okienku do ustawiania wartości alarmow temperatury silos 2
    this->spinBox->setValue(this->state_of_alarms->get_critical_temp_alarm_silos_2()); // ustawienie wartości spinboxu poziomu krytycznego w okienku do ustawiania wartości alarmow temperatury silos 2


    this->connect(this->horizontalSlider,&QSlider::valueChanged,this->spinBox,&QSpinBox::setValue);
    this->connect(this->horizontalSlider_2,&QSlider::valueChanged,this->spinBox_2,&QSpinBox::setValue);

    this->connect(this->spinBox,QOverload<int>::of(&QSpinBox::valueChanged),this->horizontalSlider,&QSlider::setValue);
    this->connect(this->spinBox_2,QOverload<int>::of(&QSpinBox::valueChanged),this->horizontalSlider_2,&QSlider::setValue);
    this->connect(this->buttonBox->button(QDialogButtonBox::Apply),&QPushButton::clicked,this,&Temp_settings_window::set_alarms);
    this->connect(this->buttonBox->button(QDialogButtonBox::Cancel),&QPushButton::clicked, this,&QWidget::close);

}


void Temp_settings_window::set_alarms(){
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



 Temp_settings_window::~ Temp_settings_window(){}