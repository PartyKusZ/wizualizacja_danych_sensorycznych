#pragma once
#include <QWidget>
#include <QPainter>
#include <QStyle>
#include <QStyleOption>
#include <iostream>
#include "Temp_draw.hpp"
#include "ui_Temp_alarms.h"
/**
 * @brief The class responsible for drawing the silo in the "All parameters" tab.
 * 
 */

class Temp_silos: public QWidget, public Temp_draw, public Ui::temp_alarms_window{
    private:

    public:

   
        explicit Temp_silos(QWidget *parent);

        void paintEvent(QPaintEvent *event) override;

        ~Temp_silos();
  
        void data_refresh(double _temp_1, double _temp_2);

};