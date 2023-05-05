#pragma once    
#include "Silos_position.hpp"
#include "State_of_alarms.hpp"

/**
 * @brief This class is responsible for drawing the temperature gradient, tab temp
 * 
 */

class Temp_draw: public Silos_position{
    
    private:
        double temp_1 = 0;
        double temp_2 = 0;
        double warning = 0;
        double critical = 0;


    public:
        Temp_draw();
        void set_state_of_alarms(int _warning,int _critical);

        ~Temp_draw();

    protected:
        void set_temperature(int _temp_1, int _temp_2);
        void draw_gradient(QPainter &painter,QSize size);
        QColor colors_interpolation(double temp);


};