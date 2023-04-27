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

class All_param_silos_1: public QWidget, public All_param_draw{
    Q_OBJECT
    private:

    public:

   
        explicit All_param_silos_1(QWidget *parent);

        void paintEvent(QPaintEvent *event) override;

         ~All_param_silos_1();
   // public slots:
        void data_refresh(int _fulfilment,int _temp_1, int _temp_2, int _hum_1, int _hum_2);

};
