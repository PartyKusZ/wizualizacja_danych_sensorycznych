#pragma once    
#include "Silos_position.hpp"
#include "State_of_alarms.hpp"

/**
 * @brief This class is responsible for drawing the temperature gradient, tab temp
 * 
 */

class Hum_draw: public Silos_position{
    
    private:
        double hum_1 = 0;
        double hum_2 = 0;
        double warning = 0;
        double critical = 0;


    public:
        Hum_draw();
        void set_state_of_alarms(int _warning,int _critical);

        ~Hum_draw();

    protected:
        void set_humidity(int _hum_1, int _hum_2);
        void draw_gradient(QPainter &painter,QSize size);
        QColor colors_interpolation(double hum);


};