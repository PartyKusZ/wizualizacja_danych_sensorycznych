#include "Temp_draw.hpp"


/**
 * @brief Construct a new Temp_draw::Temp_draw object
 * 
 */
Temp_draw::Temp_draw(): Silos_position() {;};



/**
 * @brief simply setter method for temp param 
 * 
 * @param _temp_1 
 * @param _temp_2 
 */
void Temp_draw::set_temperature(QString _temp_1, QString _temp_2){

    this->temp_1 = _temp_1 + " °C";
    this->temp_2 = _temp_2 + " °C";

};


void Temp_draw::draw_gradient(QPainter &painter,QSize size){
    auto c_size = size;
    QRect rect(this->get_x_offset(c_size.width()),this->get_y_offset(c_size.height()),this->get_width(c_size.width()),this->get_height(c_size.height())); // Pozycja i rozmiar prostokąta
    QLinearGradient gradient(rect.topLeft(), rect.bottomLeft());
    gradient.setColorAt(0, Qt::blue);
    gradient.setColorAt(1, Qt::red);

    QBrush brush(gradient);
    painter.setBrush(brush);
    painter.setPen(Qt::NoPen);

    painter.drawRect(rect);
}


Temp_draw::~Temp_draw(){;};