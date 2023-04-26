#include "Main_window.hpp"
#include "signal_emiter.hpp"
 /**
 * @brief Construct a new Main_window object
 * 
 * @param parent parent widget
 */

Main_window::Main_window(QWidget *parent): Ui::Main_window(), QWidget(parent){
   
    this->setupUi(this);
    this->all_param_silos_1->set_values("25C","26C","30%","21%",98);
    this->all_param_silos_2->set_values("25C","26C","30%","21%",50);
    this->volume_info_al_1->setText("98%");
    this->volume_info_al_2->setText("50%");
   
}   

/**
 * @brief Destroy the Main_window::Main_window object
 * 
 */
Main_window::~Main_window(){}
