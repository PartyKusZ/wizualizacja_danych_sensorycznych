#pragma once    
#include <QString>
#include "Alarms_window.hpp"
#include "State_of_alarms.hpp"

/**
 * @brief Class representing the window for setting the alarm values on the temp tab
 * 
 */

class Alarms_window_vol: public Alarms_window {
    Q_OBJECT
    
    public: 

        Alarms_window_vol(State_of_alarms *_state_of_alarms, int _silo_number,QString _window_title);

        void set_up() override; 

        ~Alarms_window_vol();

    private:

    public slots: 
        void set_alarms() override;



};