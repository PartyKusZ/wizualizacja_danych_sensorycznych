#include "All_param_silos_1.hpp"

/**
* @brief Construct a new All_param_silos_1 object
* 
* @param parent parent widget
 */

All_param_silos_1::All_param_silos_1(QWidget *parent): QWidget(parent), Silos_position() {};



/**
 * @brief Drawing a silo
 * 
 * @param event 
 */

void All_param_silos_1::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    auto c_size = this->size();
    QRect rect(this->get_x_offset(c_size.width()),this->get_y_offset(c_size.height()),this->get_width(c_size.width()),this->get_height(c_size.height())); // Pozycja i rozmiar prostokąta
    // Rysuj kontur prostokąta
    painter.setPen(QColor(255, 255, 255));
    painter.setBrush(Qt::NoBrush);
    painter.drawPolygon(this->get_trapezium(c_size.width(),c_size.height()));
    painter.drawRect(rect);

    // Rysuj wypełnienie prostokąta
    int fillWidth = static_cast<int>(rect.height() * 50 / 100);
    QRect fillRect(rect.x(), rect.y()+fillWidth,rect.width(), fillWidth );

    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(255, 255, 255));
    painter.drawRect(fillRect);
 }


/**
 * @brief Destroy the All_param_silos_1::All_param_silos_1 object
 * 
 */
All_param_silos_1::~All_param_silos_1(){};
 