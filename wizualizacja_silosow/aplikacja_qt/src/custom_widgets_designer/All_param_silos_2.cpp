#include "All_param_silos_2.hpp"

/**
 * @brief Construct a new All_param_silos_2 object
 * 
 * @param parent parent widget
 */
 All_param_silos_2::All_param_silos_2(QWidget *parent): QWidget(parent), Silos_position() {};


/**
 * @brief Drawing a fullfulment of silo
 * 
 * @param painter 
 * @param size of silo
 * @param fulfilment  in percent
 */


void All_param_silos_2::draw_fulfilment(QPainter &painter,QSize size, int fulfilment){
    auto c_size = size;
    QRect rect(this->get_x_offset(c_size.width()),this->get_y_offset(c_size.height()),this->get_width(c_size.width()),this->get_height(c_size.height())); // Pozycja i rozmiar prostokąta
    int empty = 100 - fulfilment; // knowledge of empty space is required 
    int fill_width = static_cast<int>(rect.height() * fulfilment / 100);
    int y_offset =  static_cast<int>(rect.height() * empty / 100);
    QRect fillRect(rect.x(), rect.y()+y_offset,rect.width(), fill_width );

    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(255, 255, 255));
    painter.drawRect(fillRect);
}



  /**
   * @brief Drawing a silo
   * 
   * @param event 
   */

 void All_param_silos_2::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    this->draw_outline(painter,this->size());
    this->draw_fulfilment(painter,this->size(),15);
 }

/**
 * @brief Destroy the All_param_silos_2::All_param_silos_2 object
 * 
 */
All_param_silos_2::~All_param_silos_2(){};
 