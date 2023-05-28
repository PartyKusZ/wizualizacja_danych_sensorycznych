#include "Vol_backend.hpp"
/**
 * @brief Construct a new Vol_backend::Vol_backend object
 * @details Construct the Vol_backend object and set the alarm values required to draw fulfilment on the silo
 * 
 * @param _silos_1: data relating to silo No 1
 * @param _silos_2: data relating to silo No 2
 * @param _ui: Ui 
 * @param _state_of_alarms: alarm values
 */
Vol_backend::Vol_backend(std::array<int,5> &_silos_1, 
                         std::array<int,5> &_silos_2,
                         Ui::Main_window &_ui,
                         State_of_alarms *_state_of_alarms): 
                         
                         QObject(),
                         silos_1(_silos_1),
                         silos_2(_silos_2),
                         ui(_ui),
                         state_of_alarms(_state_of_alarms){
    this->alarms_window_1 = new Alarms_window_vol(_state_of_alarms,SILO_1,tr("Alarmy wypełnienia - silos 1"));
    this->alarms_window_2 = new Alarms_window_vol(_state_of_alarms,SILO_2,tr("Alarmy wypełnienia - silos 2"));


    this->ui.vol_silos_1->set_state_of_alarms(state_of_alarms->get_fulfillment_alarm_silos_1(),state_of_alarms->get_critical_fulfillment_alarm_silos_1()); // ustawienie wartości alarmów humeratury dla rysowania gradientów w klasie hum_draw silos 1
    this->ui.vol_silos_2->set_state_of_alarms(state_of_alarms->get_fulfillment_alarm_silos_2(),state_of_alarms->get_critical_fulfillment_alarm_silos_2()); // ustawienie wartości alarmów humeratury dla rysowania gradientów w klasie hum_draw silos 2

    this->connect(this->ui.vol_alarms_settings_button_silos_1,&QPushButton::clicked,this->alarms_window_1,&Alarms_window_vol::show); // uruchamia okienko do ustawiania alarmów temperatury w silos 1 po wicsięcicu guzika
    this->connect(this->ui.vol_alarms_settings_button_silos_2,&QPushButton::clicked,this->alarms_window_2,&Alarms_window_vol::show); // uruchamia okienko do ustawiania alarmów temperatury w silos 2 po wicsięcicu guzika


  
}


/**
 * @brief Sets the text information and the information needed to draw a gradient for the fulfilment tab.
 * 
 */

void Vol_backend::set_vol_silos(){
    this->ui.vol_info_vol_1->setText(QString::number(this->silos_1[0]) + " %");
    this->ui.vol_info_vol_2->setText(QString::number(this->silos_2[0]) + " %");

    this->ui.vol_silos_1->data_refresh(this->silos_1[0]);
    this->ui.vol_silos_2->data_refresh(this->silos_2[0]);

}

/**
 * @brief Slot for setting  alarms information in the  tab humerature. sets text information and the alarm icon.  
 * 
 */ 

void Vol_backend::set_info_alarms_silos(){
    ui.vol_silos_1->set_state_of_alarms(state_of_alarms->get_fulfillment_alarm_silos_1(),state_of_alarms->get_critical_fulfillment_alarm_silos_1());
    ui.vol_silos_2->set_state_of_alarms(state_of_alarms->get_fulfillment_alarm_silos_2(),state_of_alarms->get_critical_fulfillment_alarm_silos_2());


    if(silos_1[0] < state_of_alarms->get_fulfillment_alarm_silos_1()){
        ui.vol_info_alarms_vol_1->setText(tr("Wilgotność w normie"));
        ui.vol_ico_vol_1->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_1[0] > state_of_alarms->get_fulfillment_alarm_silos_1()){
        ui.vol_info_alarms_vol_1->setText(tr("Przekroczono wartość ostrzegawczą"));
        ui.vol_ico_vol_1->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_1[0] > state_of_alarms->get_critical_fulfillment_alarm_silos_1()){
        ui.vol_info_alarms_vol_1->setText(tr("Przekroczono wartość krytyczną"));
        ui.vol_ico_vol_1->setPixmap(QPixmap(":/ikona_stop.png"));
    }

    if(silos_2[0] < state_of_alarms->get_fulfillment_alarm_silos_2() ){
        ui.vol_info_alarms_vol_2->setText(tr("Wilgotność w normie"));
        ui.vol_ico_vol_2->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_2[0] > state_of_alarms->get_fulfillment_alarm_silos_2() ){
        ui.vol_info_alarms_vol_2->setText(tr("Przekroczono wartość ostrzegawczą"));
        ui.vol_ico_vol_2->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_2[0] > state_of_alarms->get_critical_fulfillment_alarm_silos_2()){
        ui.vol_info_alarms_vol_2->setText(tr("Przekroczono wartość krytyczną"));
        ui.vol_ico_vol_2->setPixmap(QPixmap(":/ikona_stop.png"));
    }
}

/**
 * @brief Destroy the Vol_backend::Vol_backend object
 * 
 */
Vol_backend::~Vol_backend(){
    delete this->alarms_window_1;
    delete this->alarms_window_2;
}