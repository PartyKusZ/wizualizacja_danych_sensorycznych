#pragma once
#include <QWidget>
#include <QPainter>
#include <QStyle>
#include <QStyleOption>
#include <iostream>
#include "Vol_draw.hpp"
/**
 * @brief The class responsible for drawing the silo in the "Temperature" tab.
 * 
 */

class Vol_silos: public QWidget, public Vol_draw{
    private:
    public:

   
        explicit Vol_silos(QWidget *parent);

        void paintEvent(QPaintEvent *event) override;

        ~Vol_silos();
  
        void data_refresh(double _vol);

};
