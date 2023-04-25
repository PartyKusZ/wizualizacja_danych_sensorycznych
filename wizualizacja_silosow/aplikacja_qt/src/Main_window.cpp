#include "Main_window.hpp"

 /**
 * @brief Construct a new Main_window object
 * 
 * @param parent parent widget
 */

Main_window::Main_window(QWidget *parent): Ui::Main_window(), QWidget(parent){
   
    this->setupUi(this);
    this->all_param_silos_1->set_values("2","1","3","7",98);
    this->all_param_silos_2->set_values("2","1","3","7",50);
}   

/**
 * @brief Destroy the Main_window::Main_window object
 * 
 */
Main_window::~Main_window(){}
