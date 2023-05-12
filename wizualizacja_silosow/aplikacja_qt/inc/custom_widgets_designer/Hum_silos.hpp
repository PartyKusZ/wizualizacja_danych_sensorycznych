#pragma once
#include <QWidget>
#include <QPainter>
#include <QStyle>
#include <QStyleOption>
#include <iostream>
#include "Hum_draw.hpp"
/**
 * @brief The class responsible for drawing the silo in the "Humerature" tab.
 * 
 */

class Hum_silos: public QWidget, public Hum_draw{
    private:
    public:

   
        explicit Hum_silos(QWidget *parent);

        void paintEvent(QPaintEvent *event) override;

        ~Hum_silos();
  
        void data_refresh(double _hum_1, double _hum_2);

};
