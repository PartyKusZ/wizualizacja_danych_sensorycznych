#pragma once
#include <QVector>
#include <QPoint>
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
        
        /**
         * @brief Get the x offset of silo on the silo widget 
         * 
         * @param x width of the widget on which the silo is drawn
         * @return int offset 
         */

        int get_x_offset(int x);

        /**
         * @brief Get the y offset of silo on the silo widget 
         * 
         * @param y height of the widget on which the silo is drawn
         * @return int offset 
         */

        int get_y_offset(int y);

        /**
         * @brief Get the width of silo
         * 
         * @param width width of the widget on which the silo is drawn
         * @return int width of silo
         */


        int get_width(int width);

        /**
         * @brief Get the height of silo
         * 
         * @param height height of the widget on which the silo is drawn
         * @return int  height of silo 
         */

        int get_height(int height);

        /**
         * @brief Get the trapezium - top of the silo
         * 
         * @param width width of the widget on which the silo is drawn
         * @param height height of the widget on which the silo is drawn
         * @return QVector<QPoint> points defining the trapezium - top of the silo
         */

        QVector<QPoint> get_trapezium(int width, int height);
        ~Silos_position(){};
};