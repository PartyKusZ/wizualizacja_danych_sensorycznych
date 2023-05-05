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

void Temp_draw::set_state_of_alarms(int _warning,int _critical){
    this->warning = _warning;
    this->critical = _critical;
}

/**
 * @brief By means of interpolation, it calculates the appropriate colour depending on the current temperature and alarm values.
 * 
 * @param temp current temperature 
 * @return QColor  calculated color
 */


QColor Temp_draw::colors_interpolation(double temp){
    int r;
    int g;
    int b;
    double factor;
    if(temp < this->warning){
        factor = temp / this->warning;
        r = static_cast<int>(0 * (1 - factor) + 255 * factor);
        g = static_cast<int>(0 * (1 - factor) + 255 * factor);
        b = static_cast<int>(255 * (1 - factor) + 0 * factor);
        return QColor(r,g,b);
    }
    if(temp > this->warning && temp < this->critical){
        factor = temp / this->critical;
        r = static_cast<int>(255 * (1 - factor) + 255 * factor);
        g = static_cast<int>(255 * (1 - factor) + 0 * factor);
        b = static_cast<int>(0 * (1 - factor) + 0 * factor);

        return QColor(r,g,b);
    }
    if(temp > this->critical){
        return QColor(255,0,0);
    }
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
    gradient.setColorAt(0, this->colors_interpolation(this->temp_1));
    gradient.setColorAt(1, this->colors_interpolation(this->temp_2));

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