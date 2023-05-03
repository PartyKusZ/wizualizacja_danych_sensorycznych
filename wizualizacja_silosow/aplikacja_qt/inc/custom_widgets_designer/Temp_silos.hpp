#pragma once
#include <QWidget>
#include <QPainter>
#include <QStyle>
#include <QStyleOption>
#include <iostream>
#include "Temp_draw.hpp"

/**
 * @brief The class responsible for drawing the silo in the "All parameters" tab.
 * 
 */

class Temp_silos: public QWidget, public Temp_draw{
    private:

    public:

   
        explicit Temp_silos(QWidget *parent);

        void paintEvent(QPaintEvent *event) override;

        ~Temp_silos();
  
        void data_refresh(double _temp_1, double _temp_2);

};
