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
#include "Temp_settings_window.hpp"
#include "ui_Temp_alarms.h"

/**
 * @brief Class representing the main window
 * 
 */


class Main_window : public QWidget, public Ui::Main_window{
  Q_OBJECT
  
  private:

    static constexpr int SILO_1 = 1;
    static constexpr int SILO_2 = 2;

    Data *data; //!< stores data received from the serial port
    std::array<int,5> silos_1; //!< store data for silo 1
    std::array<int,5> silos_2; //!< store data for silo 2

    QTimer timer; //!< a timer for cyclic application status updates

    State_of_alarms *state_of_alarms; //!< stores alarm values for filling, temperature, volume and humidity
    Temp_settings_window *temp_alarms_settings_1; //!< widget for a window in which values can be set for alarms
    Temp_settings_window *temp_alarms_settings_2; //!< widget for a window in which values can be set for alarms
  public:
      
    explicit Main_window(QWidget *parent = nullptr, Data *_data = nullptr);
    ~Main_window();

  public slots:
    void silos_data_update();
    void set_all_param_silos();
    void set_all_param_silos_fullfilmnet_text();
    void set_info_alarms_temp_silos_1();
    void set_info_alarms_temp_silos_2();
    void set_temp_silos();



};