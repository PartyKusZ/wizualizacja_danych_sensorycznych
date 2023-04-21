#pragma once
#include <QWidget>
#include <QPainter>
#include <iostream>
#include "All_param_draw.hpp"

/**
 * @brief The class responsible for drawing the silo in the "All parameters" tab.
 * 
 */

class All_param_silos_1: public QWidget, public All_param_draw{
    private:

    public:

   
        All_param_silos_1(QWidget *parent);

        void paintEvent(QPaintEvent *event) override;

         ~All_param_silos_1();
};
