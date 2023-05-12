#pragma once    
#include <QString>
#include "Alarms_window.hpp"
#include "State_of_alarms.hpp"
class Alarms_window_hum: public Alarms_window {
    Q_OBJECT
    
    public: 

        Alarms_window_hum(State_of_alarms *_state_of_alarms, int _silo_number,QString _window_title);

        void set_up() override; 

        ~Alarms_window_hum();

    private:

    public slots: 
        void set_alarms() override;



};