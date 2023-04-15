#pragma once
#include <QWidget>
#include <QPainter>
#include <iostream>
#include "Silos_position.hpp"

/**
 * @brief The class responsible for drawing the silo in the "All parameters" tab.
 * 
 */

class All_param_silos_1: public QWidget, public Silos_position{
private:
 
public:
    /**
     * @brief Construct a new All_param_silos_1 object
     * 
     * @param parent parent widget
     */
    All_param_silos_1(QWidget *parent);

    /**
     * @brief Drawing a silo
     * 
     * @param event 
     */

    void paintEvent(QPaintEvent *event) override;

     ~All_param_silos_1();
};
