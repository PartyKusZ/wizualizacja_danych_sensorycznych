#include "Temp_backend.hpp"
/**
 * @brief Construct a new Temp_backend::Temp_backend object
 * @details Construct the Temp_backend object and set the alarm values required to draw gradients on the silo
 * 
 * @param _silos_1: data relating to silo No 1
 * @param _silos_2: data relating to silo No 2
 * @param _ui: Ui 
 * @param _state_of_alarms: alarm values
 */
Temp_backend::Temp_backend(std::array<int,5> &_silos_1, 
                           std::array<int,5> &_silos_2,
                           Ui::Main_window &_ui,
                           State_of_alarms *_state_of_alarms): 
                           
                           QObject(),

                           silos_1(_silos_1),
                           silos_2(_silos_2),
                           ui(_ui),
                           state_of_alarms(_state_of_alarms){
    this->alarms_window_1 = new Alarms_window_temp(_state_of_alarms,SILO_1,tr("Alarmy temperatury - silos 1"));
    this->alarms_window_2 = new Alarms_window_temp(_state_of_alarms,SILO_2,tr("Alarmy temperatury - silos 2"));


    this->ui.temp_silos_1->set_state_of_alarms(state_of_alarms->get_temp_alarm_silos_1(),state_of_alarms->get_critical_temp_alarm_silos_1()); // ustawienie wartości alarmów temperatury dla rysowania gradientów w klasie Temp_draw silos 1
    this->ui.temp_silos_2->set_state_of_alarms(state_of_alarms->get_temp_alarm_silos_2(),state_of_alarms->get_critical_temp_alarm_silos_2()); // ustawienie wartości alarmów temperatury dla rysowania gradientów w klasie Temp_draw silos 2

    this->connect(this->ui.temp_alarms_settings_button_silos_1,&QPushButton::clicked,this->alarms_window_1,&Alarms_window_temp::show); // uruchamia okienko do ustawiania alarmów temperatury w silos 1 po wicsięcicu guzika
    this->connect(this->ui.temp_alarms_settings_button_silos_2,&QPushButton::clicked,this->alarms_window_2,&Alarms_window_temp::show); // uruchamia okienko do ustawiania alarmów temperatury w silos 2 po wicsięcicu guzika


  
}


/**
 * @brief Sets the text information and the information needed to draw a gradient for the temperature tab.
 * 
 */

void Temp_backend::set_temp_silos(){
    this->ui.temp_silos_1_first->setText(QString::number(this->silos_1[1]) + " °C");
    this->ui.temp_silos_1_second->setText(QString::number(this->silos_1[2]) + " °C");
    this->ui.temp_silos_1->data_refresh(this->silos_1[1],this->silos_1[2]);

    this->ui.temp_silos_2_first->setText(QString::number(this->silos_2[1]) + " °C");
    this->ui.temp_silos_2_second->setText(QString::number(this->silos_2[2]) + " °C");
    this->ui.temp_silos_2->data_refresh(this->silos_2[1],this->silos_2[2]);

}

/**
 * @brief Slot for setting  alarms information in the  tab temperature. sets text information and the alarm icon.  
 * 
 */ 

void Temp_backend::set_info_alarms_silos(){
    ui.temp_silos_1->set_state_of_alarms(state_of_alarms->get_temp_alarm_silos_1(),state_of_alarms->get_critical_temp_alarm_silos_1());
    ui.temp_silos_2->set_state_of_alarms(state_of_alarms->get_temp_alarm_silos_2(),state_of_alarms->get_critical_temp_alarm_silos_2());


    if(silos_1[1] < state_of_alarms->get_temp_alarm_silos_1() || silos_1[2] < state_of_alarms->get_temp_alarm_silos_1()){
        ui.temp_info_alarms_temp_1->setText(tr("Temperatury w normie"));
        ui.temp_ico_temp_1->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_1[1] > state_of_alarms->get_temp_alarm_silos_1() || silos_1[2] > state_of_alarms->get_temp_alarm_silos_1()){
        ui.temp_info_alarms_temp_1->setText(tr("Przekroczono wartość ostrzegawczą"));
        ui.temp_ico_temp_1->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_1[1] > state_of_alarms->get_critical_temp_alarm_silos_1() || silos_1[2] > state_of_alarms->get_critical_temp_alarm_silos_1()){
        ui.temp_info_alarms_temp_1->setText(tr("Przekroczono wartość krytyczną"));
        ui.temp_ico_temp_1->setPixmap(QPixmap(":/ikona_stop.png"));
    }

    if(silos_2[1] < state_of_alarms->get_temp_alarm_silos_2() || silos_2[2] < state_of_alarms->get_temp_alarm_silos_2()){
        ui.temp_info_alarms_temp_2->setText(tr("Temperatury w normie"));
        ui.temp_ico_temp_2->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_2[1] > state_of_alarms->get_temp_alarm_silos_2() || silos_2[2] > state_of_alarms->get_temp_alarm_silos_2()){
        ui.temp_info_alarms_temp_2->setText(tr("Przekroczono wartość ostrzegawczą"));
        ui.temp_ico_temp_2->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_2[1] > state_of_alarms->get_critical_temp_alarm_silos_2() || silos_2[2] > state_of_alarms->get_critical_temp_alarm_silos_2()){
        ui.temp_info_alarms_temp_2->setText(tr("Przekroczono wartość krytyczną"));
        ui.temp_ico_temp_2->setPixmap(QPixmap(":/ikona_stop.png"));
    }
}

/**
 * @brief Destroy the Temp_backend::Temp_backend object
 * 
 */
Temp_backend::~Temp_backend(){
    delete this->alarms_window_1;
    delete this->alarms_window_2;
}