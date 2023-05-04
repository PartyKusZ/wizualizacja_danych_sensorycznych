#include "Temp_draw.hpp"


/**
 * @brief Construct a new Temp_draw::Temp_draw object
 * 
 */
Temp_draw::Temp_draw(): Silos_position() {;};


/**
 * @brief Sets the temperature values needed to draw the gradient
 * 
 * @param _temp_1 temperature of the first sensor
 * @param _temp_2 temperature of the second sensor
 */

void Temp_draw:: set_temperature(int _temp_1, int _temp_2){

    this->temp_1 = _temp_1;
    this->temp_2 = _temp_2;
}





/**
 * @brief sets the value of the alrams for correct gradient adjustment. the colours depend on the value of the alrams.
 * 
 * @param state state of alarms 
 */

void Temp_draw::set_state_of_alarms(State_of_alarms *state){
    this->state_of_alarms = state;
}








/**
 * @brief Draws a gradient showing the temperature distribution 
 * 
 * @param painter Qpainter object
 * @param size  size of the widget on which the gradient is drawn
 */
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

/**
 * @brief Destroy the Temp_draw::Temp_draw object
 * 
 */
Temp_draw::~Temp_draw(){;};