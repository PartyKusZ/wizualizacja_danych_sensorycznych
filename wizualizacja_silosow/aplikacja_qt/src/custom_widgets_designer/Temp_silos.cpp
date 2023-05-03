#include "Temp_silos.hpp"

/**
 * @brief Construct a new Temp_silos::Temp_silos object
 * 
 * @param parent 
 */
Temp_silos::Temp_silos(QWidget *parent): QWidget(parent), Temp_draw(), Ui::temp_alarms_window() {};

/**
 * @brief overloaded drawing method 
 * 
 * @param event 
 */

void Temp_silos::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    this->draw_outline(painter,this->size());
    this->draw_gradient(painter,this->size());
};

/**
 * @brief Sets the temperature values needed to draw the gradient and to display it 
 * 
 * @param _temp_1 
 * @param _temp_2 
 */
void Temp_silos::data_refresh(double _temp_1, double _temp_2){

}


Temp_silos::~Temp_silos(){};