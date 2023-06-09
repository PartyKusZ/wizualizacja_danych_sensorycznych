#pragma once
#include <QWidget>
#include <QPainter>
#include <array>
#include <QTimer>
#include <QtCharts>
#include <iostream>
#include <algorithm>
#include "ui_Main_window.h"
#include "Data.hpp"
#include "State_of_alarms.hpp"
#include "Alarms_window.hpp"
#include "All_param_backend.hpp"
#include "Temp_backend.hpp"
#include "Hum_backend.hpp"
#include "Vol_backend.hpp"
#include "Database.hpp"
#include "Historical_data.hpp"
#include "ui_Alarms_window.h"

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
   

    All_param_backend *all_param_backend;
    Temp_backend *temp_backend;
    Hum_backend *hum_backend;
    Vol_backend *vol_backend;
    Historical_data *historical_data;

    Database database;

    QTranslator *translator;

  public:
      
    explicit Main_window(QWidget *parent = nullptr, Data *_data = nullptr);
    ~Main_window();

  public slots:
    void silos_data_update();
    void lang_pl();
    void lang_en();    


};