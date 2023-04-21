#pragma once
#include <QVector>
#include <QPoint>
#include <QPainter>
/**
 * @brief A class describing the dimensions and location of a silo.
 * 
 */

class Silos_position{

    private: 
        constexpr static double WIDTH_OFFSET = 0.58;
        constexpr static double HEIGHT_OFFSET = 0.62;
        constexpr static double X_OFFSET = 0.31;
        constexpr static double Y_OFFSET = 0.20;
        

    
    protected:
        /**
         * @brief Construct a new Silos_position object
         * 
         */
        Silos_position(){};
        
        int get_x_offset(int x);
        int get_y_offset(int y);
        int get_width(int width);
        int get_height(int height);
        
        QVector<QPoint> get_trapezium(int width, int height);

        void draw_outline(QPainter &painter, QSize size);

        ~Silos_position(){};
};