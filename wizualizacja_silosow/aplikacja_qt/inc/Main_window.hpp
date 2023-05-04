#pragma once
#include <QWidget>
#include <QPainter>
#include <array>
#include <QTimer>
#include <iostream>
#include <algorithm>
#include "ui_Main_window.h"
#include "Data.hpp"
#include "State_of_alarms.hpp"
#include "ui_Temp_alarms.h"

/**
 * @brief Class representing the main window
 * 
 */


class Main_window : public QWidget, public Ui::Main_window{
  Q_OBJECT
  
  private:
    Data *data; //!< stores data received from the serial port
    std::array<int,5> silos_1; //!< store data for silo 1
    std::array<int,5> silos_2; //!< store data for silo 2

    QTimer timer; //!< a timer for cyclic application status updates

    State_of_alarms *state_of_alarms; //!< stores alarm values for filling, temperature, volume and humidity
    QWidget *temp_alarms_settings_1; //!< widget for a window in which values can be set for alarms
    Ui::temp_alarms_window *temp_alarms_settings_ui_1; //!< Stores the user interface for the window from setting alarm values
  public:
      
    explicit Main_window(QWidget *parent = nullptr, Data *_data = nullptr);
    ~Main_window();

  public slots:
    void silos_data_update();
    void set_all_param_silos_1();
    void set_all_param_silos_1_fullfilmnet_text();
    void set_all_param_silos_2();
    void set_all_param_silos_2_fullfilmnet_text();
    void show_temp_settings_silos_1();
    void set_alarms_temp_silos_1();
    void set_info_alarms_temp_silos_1();
    void set_temp_silos_1();



};