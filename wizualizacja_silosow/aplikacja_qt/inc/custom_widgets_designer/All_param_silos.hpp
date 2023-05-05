#pragma once
#include <QWidget>
#include <QPainter>
#include <QStyle>
#include <QStyleOption>
#include <iostream>
#include "All_param_draw.hpp"

/**
 * @brief The class responsible for drawing the silo in the "All parameters" tab.
 * 
 */

class All_param_silos: public QWidget, public All_param_draw{
    private:

    public:

   
        explicit All_param_silos(QWidget *parent);

        void paintEvent(QPaintEvent *event) override;

         ~All_param_silos();
  
        void data_refresh(double _fulfilment,double _temp_1, double _temp_2, double _hum_1, double _hum_2);

};
