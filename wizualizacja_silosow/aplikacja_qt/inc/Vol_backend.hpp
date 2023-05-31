#pragma once 
#include <QObject>
#include <iostream>
#include "ui_Main_window.h"
#include "Alarms_window_vol.hpp"
#include "State_of_alarms.hpp"

/**
 * @brief Class containing slots that update data on vol tabs
 * 
 */

class Vol_backend: public QObject{

Q_OBJECT

private:

    static constexpr int SILO_1 = 1;
    static constexpr int SILO_2 = 2;

    const std::array<int,5> &silos_1; //!< store data for silo 1
    const std::array<int,5> &silos_2; //!< store data for silo 2
    const State_of_alarms *state_of_alarms; //!< store data about alarms
   
    Ui::Main_window &ui; //!< store Ui 

public:
    Alarms_window_vol *alarms_window_1;
    Alarms_window_vol *alarms_window_2;
    Vol_backend(std::array<int,5> &_silos_1, std::array<int,5> &_silos_2,Ui::Main_window &_ui,State_of_alarms *_state_of_alarms);
    ~Vol_backend();

public slots:
    void set_vol_silos();
    void set_info_alarms_silos();

    
};

