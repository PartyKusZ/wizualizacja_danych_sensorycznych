#include "Main_window.hpp"
 /**
 * @brief Construct a new Main_window object
 * 
 * @param parent parent widget
 */

Main_window::Main_window(QWidget *parent,Data *_data): data(_data), Ui::Main_window(), QWidget(parent){
   
    this->setupUi(this);
    this->all_param_silos_1->set_values("25C","26C","30%","21%",98);
    this->all_param_silos_2->set_values("25C","26C","30%","21%",50);
    this->volume_info_al_1->setText("98%");
    this->volume_info_al_2->setText("50%");
    this->timer.setInterval(500);
    this->connect(&timer,&QTimer::timeout,this,&Main_window::test_silo);
    this->timer.start();    
   
}   


void Main_window::test_silo(){
    auto silos = data->get_data_silos_1();
    this->all_param_silos_1->data_refresh(silos[0],silos[1],silos[2],silos[3],silos[4]);
    for(int i = 0; i < silos.size();++i){
        std::cout << silos[i] << std::endl;
    }
}



/**
 * @brief Destroy the Main_window::Main_window object
 * 
 */
Main_window::~Main_window(){}
