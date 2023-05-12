#include "Hum_backend.hpp"
/**
 * @brief Construct a new Hum_backend::Hum_backend object
 * @details Construct the Hum_backend object and set the alarm values required to draw gradients on the silo
 * 
 * @param _silos_1: data relating to silo No 1
 * @param _silos_2: data relating to silo No 2
 * @param _ui: Ui 
 * @param _state_of_alarms: alarm values
 */
Hum_backend::Hum_backend(std::array<int,5> &_silos_1, 
                         std::array<int,5> &_silos_2,
                         Ui::Main_window &_ui,
                         State_of_alarms *_state_of_alarms): 
                         
                         QObject(),
                         silos_1(_silos_1),
                         silos_2(_silos_2),
                         ui(_ui),
                         state_of_alarms(_state_of_alarms){
    this->alarms_window_1 = new Alarms_window_hum(_state_of_alarms,SILO_1,"Alarmy wilgotności - silos 1");
    this->alarms_window_2 = new Alarms_window_hum(_state_of_alarms,SILO_2,"Alarmy wilgotności - silos 2");


    this->ui.hum_silos_1->set_state_of_alarms(state_of_alarms->get_hum_alarm_silos_1(),state_of_alarms->get_critical_hum_alarm_silos_1()); // ustawienie wartości alarmów humeratury dla rysowania gradientów w klasie hum_draw silos 1
    this->ui.hum_silos_2->set_state_of_alarms(state_of_alarms->get_hum_alarm_silos_2(),state_of_alarms->get_critical_hum_alarm_silos_2()); // ustawienie wartości alarmów humeratury dla rysowania gradientów w klasie hum_draw silos 2

    this->connect(this->ui.hum_alarms_settings_button_silos_1,&QPushButton::clicked,this->alarms_window_1,&Alarms_window_hum::show); // uruchamia okienko do ustawiania alarmów temperatury w silos 1 po wicsięcicu guzika
    this->connect(this->ui.hum_alarms_settings_button_silos_2,&QPushButton::clicked,this->alarms_window_2,&Alarms_window_hum::show); // uruchamia okienko do ustawiania alarmów temperatury w silos 2 po wicsięcicu guzika


  
}


/**
 * @brief Sets the text information and the information needed to draw a gradient for the humerature tab.
 * 
 */

void Hum_backend::set_hum_silos(){
    this->ui.hum_silos_1_first->setText(QString::number(this->silos_1[3]) + " %");
    this->ui.hum_silos_1_second->setText(QString::number(this->silos_1[4]) + " %");
    this->ui.hum_silos_1->data_refresh(this->silos_1[1],this->silos_1[4]);

    this->ui.hum_silos_2_first->setText(QString::number(this->silos_2[3]) + " %");
    this->ui.hum_silos_2_second->setText(QString::number(this->silos_2[4]) + " %");
    this->ui.hum_silos_2->data_refresh(this->silos_2[1],this->silos_2[4]);

}

/**
 * @brief Slot for setting  alarms information in the  tab humerature. sets text information and the alarm icon.  
 * 
 */ 

void Hum_backend::set_info_alarms_silos(){
    ui.hum_silos_1->set_state_of_alarms(state_of_alarms->get_hum_alarm_silos_1(),state_of_alarms->get_critical_hum_alarm_silos_1());
    ui.hum_silos_2->set_state_of_alarms(state_of_alarms->get_hum_alarm_silos_2(),state_of_alarms->get_critical_hum_alarm_silos_2());


    if(silos_1[3] < state_of_alarms->get_hum_alarm_silos_1() || silos_1[4] < state_of_alarms->get_hum_alarm_silos_1()){
        ui.hum_info_alarms_hum_1->setText("Wilgotność w normie");
        ui.hum_ico_hum_1->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_1[3] > state_of_alarms->get_hum_alarm_silos_1() || silos_1[4] > state_of_alarms->get_hum_alarm_silos_1()){
        ui.hum_info_alarms_hum_1->setText("Przekroczono wartość ostrzegawczą");
        ui.hum_ico_hum_1->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_1[3] > state_of_alarms->get_critical_hum_alarm_silos_1() || silos_1[4] > state_of_alarms->get_critical_hum_alarm_silos_1()){
        ui.hum_info_alarms_hum_1->setText("Przekroczono wartość krytyczną");
        ui.hum_ico_hum_1->setPixmap(QPixmap(":/ikona_stop.png"));
    }

    if(silos_2[3] < state_of_alarms->get_hum_alarm_silos_2() || silos_2[4] < state_of_alarms->get_hum_alarm_silos_2()){
        ui.hum_info_alarms_hum_2->setText("Wilgotność w normie");
        ui.hum_ico_hum_2->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_2[3] > state_of_alarms->get_hum_alarm_silos_2() || silos_2[4] > state_of_alarms->get_hum_alarm_silos_2()){
        ui.hum_info_alarms_hum_2->setText("Przekroczono wartość ostrzegawczą");
        ui.hum_ico_hum_2->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_2[3] > state_of_alarms->get_critical_hum_alarm_silos_2() || silos_2[4] > state_of_alarms->get_critical_hum_alarm_silos_2()){
        ui.hum_info_alarms_hum_2->setText("Przekroczono wartość krytyczną");
        ui.hum_ico_hum_2->setPixmap(QPixmap(":/ikona_stop.png"));
    }
}

/**
 * @brief Destroy the Hum_backend::Hum_backend object
 * 
 */
Hum_backend::~Hum_backend(){
    delete this->alarms_window_1;
    delete this->alarms_window_2;
}