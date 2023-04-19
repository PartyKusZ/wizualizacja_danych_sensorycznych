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
