#pragma once    
#include "Silos_position.hpp"
#include "State_of_alarms.hpp"

/**
 * @brief This class is responsible for drawing the temperature gradient, tab temp
 * 
 */

class Temp_draw: public Silos_position{
    
    private:
        int temp_1 = 0;
        int temp_2 = 0;
        State_of_alarms *state_of_alarms = nullptr;


    public:
        Temp_draw();
        void set_temperature(int _temp_1, int _temp_2);
        void set_state_of_alarms(State_of_alarms *state);

        ~Temp_draw();

    protected:
        void draw_gradient(QPainter &painter,QSize size);


};