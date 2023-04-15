#include "Silos_position.hpp"

int Silos_position::get_x_offset(int x){return x * X_OFFSET;};
int Silos_position::get_y_offset(int y){return y * Y_OFFSET;};
int Silos_position::get_width(int width){
    double free_len = 2 * X_OFFSET * width;
    double len = width - free_len;
    return width * (len / width);
};
int Silos_position::get_height(int height){return height * HEIGHT_OFFSET;};
QVector<QPoint> Silos_position::get_trapezium(int width,int height){
    
    QVector<QPoint> points;

    points.push_back({get_x_offset(width) + (2 * get_width(width) / 5 ) ,height*0.092});
    points.push_back({get_x_offset(width) + (3 * get_width(width) / 5 ) ,height*0.092});
    points.push_back({get_x_offset(width) + get_width(width),get_y_offset(height)});
    points.push_back({get_x_offset(width),get_y_offset(height)});
    return points;
}
