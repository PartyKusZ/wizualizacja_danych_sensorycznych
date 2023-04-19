#include "Main_window.hpp"

 /**
 * @brief Construct a new Main_window object
 * 
 * @param parent parent widget
 */

Main_window::Main_window(QWidget *parent): QWidget(parent), Ui::Main_window(){
    this->setupUi(this);
}   

/**
 * @brief Destroy the Main_window::Main_window object
 * 
 */
Main_window::~Main_window(){}
