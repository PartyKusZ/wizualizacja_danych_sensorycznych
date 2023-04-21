#include "Silos_position.hpp"
 /**
 * @brief Get the x offset of silo on the silo widget 
 * 
 * @param x width of the widget on which the silo is drawn
 * @return int offset 
 */
int Silos_position::get_x_offset(int x){return x * X_OFFSET;};

 /**
 * @brief Get the y offset of silo on the silo widget 
 * 
 * @param y height of the widget on which the silo is drawn
 * @return int offset 
 */


int Silos_position::get_y_offset(int y){return y * Y_OFFSET;};


/**
 * @brief Get the width of silo
 * 
 * @param width width of the widget on which the silo is drawn
 * @return int width of silo
 */


int Silos_position::get_width(int width){
    double free_len = 2 * X_OFFSET * width;
    double len = width - free_len;
    return width * (len / width);
};


/**
 * @brief Get the height of silo
 * 
 * @param height height of the widget on which the silo is drawn
 * @return int  height of silo 
 */

int Silos_position::get_height(int height){return height * HEIGHT_OFFSET;};


  /**
 * @brief Get the trapezium - top of the silo
 * 
 * @param width width of the widget on which the silo is drawn
 * @param height height of the widget on which the silo is drawn
 * @return QVector<QPoint> points defining the trapezium - top of the silo
 */

QVector<QPoint> Silos_position::get_trapezium(int width,int height){
    
    QVector<QPoint> points;

    points.push_back({get_x_offset(width) + (2 * get_width(width) / 5 ) ,height*0.092});
    points.push_back({get_x_offset(width) + (3 * get_width(width) / 5 ) ,height*0.092});
    points.push_back({get_x_offset(width) + get_width(width),get_y_offset(height)});
    points.push_back({get_x_offset(width),get_y_offset(height)});
    return points;
}

/**
 * @brief Draws outline of silo
 * 
 * @param painter Painter object
 * @param size current size of the widget on which the silo is drawn
 */

void Silos_position::draw_outline(QPainter &painter,QSize size){
    painter.setRenderHint(QPainter::Antialiasing);
    auto c_size = size;
    QRect rect(this->get_x_offset(c_size.width()),this->get_y_offset(c_size.height()),this->get_width(c_size.width()),this->get_height(c_size.height())); // Pozycja i rozmiar prostokąta
    // Rysuj kontur prostokąta
    painter.setPen(QColor(255, 255, 255));
    painter.setBrush(Qt::NoBrush);
    painter.drawPolygon(this->get_trapezium(c_size.width(),c_size.height()));
    painter.drawRect(rect);
}
