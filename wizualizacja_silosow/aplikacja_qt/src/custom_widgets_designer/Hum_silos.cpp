#include "Hum_silos.hpp"

/**
 * @brief Construct a new Hum_silos::Hum_silos object
 * 
 * @param parent 
 */
Hum_silos::Hum_silos(QWidget *parent): QWidget(parent), Hum_draw() {};

/**
 * @brief overloaded drawing method 
 * 
 * @param event 
 */

void Hum_silos::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    this->draw_outline(painter,this->size());
    this->draw_gradient(painter,this->size());
};

/**
 * @brief Sets the humidity values needed to draw the gradient and to display it 
 * 
 * @param _hum_1 
 * @param _hum_2 
 */
void Hum_silos::data_refresh(double _hum_1, double _hum_2){
    this->set_humidity(_hum_1, _hum_2);
    this->update();
}


Hum_silos::~Hum_silos(){};