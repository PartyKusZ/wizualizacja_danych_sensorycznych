#include "Main_window.hpp"
 /**
 * @brief Construct a new Main_window object
 * 
 * @param parent parent widget
 */

Main_window::Main_window(QWidget *parent,Data *_data): data(_data), Ui::Main_window(), QWidget(parent){

    this->state_of_alarms = new State_of_alarms;

    this->setupUi(this);
    
    this->volume_info_al_1->setText("98%");
    this->volume_info_al_2->setText("50%");
    this->timer.setInterval(200);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_all_param_silos_1);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::set_all_param_silos_1_fullfilmnet_text);

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
 * @brief Slot for update text information about fullfilment of first silo in  All param tab
 * 
 */

void Main_window::set_all_param_silos_1_fullfilmnet_text(){
    auto silos = data->get_data_silos_1();
    this->volume_info_al_1->setText(QString::number(silos[0]) + " %");
 }


/**
 * @brief Destroy the Main_window::Main_window object
 * 
 */
Main_window::~Main_window(){
    delete this->state_of_alarms;
}
