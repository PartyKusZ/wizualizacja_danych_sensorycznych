#include "Hum_draw.hpp"


/**
 * @brief Construct a new Hum_draw::Hum_draw object
 * 
 */
Hum_draw::Hum_draw(): Silos_position() {;};


/**
 * @brief Sets the temperature values needed to draw the gradient
 * 
 * @param _hum_1 temperature of the first sensor
 * @param _hum_2 temperature of the second sensor
 */

void Hum_draw:: set_humidity(int _hum_1, int _hum_2){

    this->hum_1 = _hum_1;
    this->hum_2 = _hum_2;
}





/**
 * @brief sets the value of the alrams for correct gradient adjustment. the colours depend on the value of the alrams.
 * 
 * @param state state of alarms 
 */

void Hum_draw::set_state_of_alarms(int _warning,int _critical){
    this->warning = _warning;
    this->critical = _critical;
}

/**
 * @brief By means of interpolation, it calculates the appropriate colour depending on the current temperature and alarm values.
 * 
 * @param temp current temperature 
 * @return QColor  calculated color
 */


QColor Hum_draw::colors_interpolation(double hum){
    int r;
    int g;
    int b;
    double factor;
    if(hum < this->critical){
        factor = hum / this->critical;
        r = static_cast<int>(230 * (1 - factor) + 0 * factor);
        g = static_cast<int>(230 * (1 - factor) + 0 * factor);
        b = static_cast<int>(255 * (1 - factor) + 255 * factor);
        return QColor(r,g,b);
   }
    if(hum >= this->critical){
        return QColor(0,0,255);
    }
}




/**
 * @brief Draws a gradient showing the temperature distribution 
 * 
 * @param painter Qpainter object
 * @param size  size of the widget on which the gradient is drawn
 */
void Hum_draw::draw_gradient(QPainter &painter,QSize size){
    auto c_size = size;
    QRect rect(this->get_x_offset(c_size.width()),this->get_y_offset(c_size.height()),this->get_width(c_size.width()),this->get_height(c_size.height())); // Pozycja i rozmiar prostokąta
    QLinearGradient gradient(rect.topLeft(), rect.bottomLeft());
    gradient.setColorAt(0, this->colors_interpolation(this->hum_1));
    gradient.setColorAt(1, this->colors_interpolation(this->hum_2));

    QBrush brush(gradient);
    painter.setBrush(brush);
    painter.setPen(Qt::NoPen);

    painter.drawRect(rect);
}

/**
 * @brief Destroy the Hum_draw::Hum_draw object
 * 
 */
Hum_draw::~Hum_draw(){;};