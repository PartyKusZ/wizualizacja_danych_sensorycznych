#include "All_param_silos_1.hpp"

/**
* @brief Construct a new All_param_silos_1 object
* 
* @param parent parent widget
 */

All_param_silos_1::All_param_silos_1(QWidget *parent): QWidget(parent), All_param_draw() {};



/**
 * @brief Drawing a silo
 * 
 * @param event 
 */

void All_param_silos_1::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    this->draw_outline(painter,this->size());
    this->draw_fulfilment(painter,this->size(),50);
    this->draw_lines(painter,this->size());
    this->draw_temp_hum(painter);
 }


/**
 * @brief Destroy the All_param_silos_1::All_param_silos_1 object
 * 
 */
All_param_silos_1::~All_param_silos_1(){};
 