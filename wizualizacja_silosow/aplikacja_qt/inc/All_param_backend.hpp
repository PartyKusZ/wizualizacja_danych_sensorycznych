#pragma once

#include <QObject>
#include <QString>
#include <array>
#include <State_of_alarms.hpp>
#include "ui_Main_window.h"

/**
 * @brief Class containing slots that update data on all param tabs
 * 
 */
class All_param_backend: public QObject{

    Q_OBJECT

    private:
    const std::array<int,5> &silos_1; //!< store data for silo 1
    const std::array<int,5> &silos_2; //!< store data for silo 2
    const State_of_alarms *state_of_alarms; //!< store data about alarms
    Ui::Main_window &ui; //!< Ui object

    public:

        All_param_backend(std::array<int,5> &_silos_1, std::array<int,5> &_silos_2,Ui::Main_window &_ui, State_of_alarms *_state_of_alarms);
        ~All_param_backend();
        

    public slots:

        void set_all_param();
        void set_all_param_fullfilmnet_text();
        void set_info_alarms_silos();


};

