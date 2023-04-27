#pragma once
#include <QWidget>
#include <QPainter>
#include <array>
#include <QTimer>
#include <iostream>
#include "ui_Main_window.h"
#include "Data.hpp"

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
  public:
      
    explicit Main_window(QWidget *parent = nullptr, Data *_data = nullptr);
    void refresh();
    ~Main_window();

  public slots:
    void test_silo();


};