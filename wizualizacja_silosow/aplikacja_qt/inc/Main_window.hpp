#pragma once
#include <QWidget>
#include <QPainter>
#include <array>
#include <QTimer>
#include <iostream>
#include "ui_Main_window.h"
#include "Data.hpp"
#include "State_of_alarms.hpp"

/**
 * @brief Class representing the main window
 * 
 */


class Main_window : public QWidget, public Ui::Main_window{
  Q_OBJECT
  
  private:
    Data *data;
    std::array<int,5> silos_1;
    std::array<int,5> silos_2;

    QTimer timer;

    State_of_alarms *state_of_alarms;
  public:
      
    explicit Main_window(QWidget *parent = nullptr, Data *_data = nullptr);
    ~Main_window();

  public slots:
    void set_all_param_silos_1();
    void set_all_param_silos_1_fullfilmnet_text();


};