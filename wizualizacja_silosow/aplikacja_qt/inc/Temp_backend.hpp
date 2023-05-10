#pragma once 
#include <QObject>
#include <iostream>
#include "ui_Main_window.h"
#include "State_of_alarms.hpp"

/**
 * @brief Class containing slots that update data on temp tabs
 * 
 */

class Temp_backend: public QObject{

Q_OBJECT

private:
    const std::array<int,5> &silos_1; //!< store data for silo 1
    const std::array<int,5> &silos_2; //!< store data for silo 2
    const State_of_alarms *state_of_alarms; //!< store data about alarms
    Ui::Main_window &ui; //!< store Ui 
public:
    Temp_backend(std::array<int,5> &_silos_1, std::array<int,5> &_silos_2,Ui::Main_window &_ui,State_of_alarms *_state_of_alarms);
    ~Temp_backend();

public slots:
    void set_temp_silos();

    
};

