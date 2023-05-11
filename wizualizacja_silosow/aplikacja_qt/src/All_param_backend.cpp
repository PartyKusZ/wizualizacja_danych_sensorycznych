#include "All_param_backend.hpp"

/**
 * @brief Construct a new All_param_backend::All_param_backend object
 * 
 * @param _silos_1 
 * @param _silos_2 
 * @param _ui 
 * @param _state_of_alarms 
 */
All_param_backend::All_param_backend(std::array<int,5> &_silos_1, 
                                     std::array<int,5> &_silos_2, 
                                     Ui::Main_window &_ui,
                                     State_of_alarms *_state_of_alarms):     
                                                        
                                     QObject(), 
                                     silos_1(_silos_1), 
                                     silos_2(_silos_2), 
                                     ui(_ui),
                                     state_of_alarms(_state_of_alarms){}

/**
 * @brief Stot for update all parameters on  silos in All param tab
 * 
 */

void All_param_backend::set_all_param(){
    this->ui.all_param_silos_1->data_refresh(silos_1[0],silos_1[1],silos_1[2],silos_1[3],silos_1[4]);
    this->ui.all_param_silos_2->data_refresh(silos_2[0],silos_2[1],silos_2[2],silos_2[3],silos_2[4]);
}




/**
 * @brief Slot for update text information about fullfilment of  silos in  All param tab
 * 
 */

void All_param_backend::set_all_param_fullfilmnet_text(){
    this->ui.volume_info_al_1->setText(QString::number(silos_1[0]) + " %");
    this->ui.volume_info_al_2->setText(QString::number(silos_2[0]) + " %");
 }


/**
 * @brief Slot for setting  alarms information in the  tab all parameters. sets text information and the alarm icon.  
 * 
 */ 

void All_param_backend::set_info_alarms_silos(){
    ui.temp_silos_1->set_state_of_alarms(state_of_alarms->get_temp_alarm_silos_1(),state_of_alarms->get_critical_temp_alarm_silos_1());
    ui.temp_silos_2->set_state_of_alarms(state_of_alarms->get_temp_alarm_silos_2(),state_of_alarms->get_critical_temp_alarm_silos_2());


    if(silos_1[1] < state_of_alarms->get_temp_alarm_silos_1()){
        ui.temp_info_alarms_al_1->setText("Temperatury w normie");
        ui.temp_ico_al_1->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_1[1] > state_of_alarms->get_temp_alarm_silos_1()){
        ui.temp_info_alarms_al_1->setText("Przekroczono wartość ostrzegawczą");
        ui.temp_ico_al_1->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_1[1] > state_of_alarms->get_critical_temp_alarm_silos_1()){
        ui.temp_info_alarms_al_1->setText("Przekroczono wartość krytyczną");
        ui.temp_ico_al_1->setPixmap(QPixmap(":/ikona_stop.png"));
    }

    if(silos_2[1] < state_of_alarms->get_temp_alarm_silos_2()){
        ui.temp_info_alarms_al_2->setText("Temperatury w normie");
        ui.temp_ico_al_2->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_2[1] > state_of_alarms->get_temp_alarm_silos_2()){
        ui.temp_info_alarms_al_2->setText("Przekroczono wartość ostrzegawczą");
        ui.temp_ico_al_2->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_2[1] > state_of_alarms->get_critical_temp_alarm_silos_2()){
        ui.temp_info_alarms_al_2->setText("Przekroczono wartość krytyczną");
        ui.temp_ico_al_2->setPixmap(QPixmap(":/ikona_stop.png"));
    }
}


/**
 * @brief Destroy the All_param_backend::All_param_backend object
 * 
 */

All_param_backend::~All_param_backend(){}