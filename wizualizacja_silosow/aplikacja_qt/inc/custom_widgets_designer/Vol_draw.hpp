#pragma once    
#include "Silos_position.hpp"
#include "State_of_alarms.hpp"

/**
 * @brief This class is responsible for drawing the temperature gradient, tab temp
 * 
 */

class Vol_draw: public Silos_position{
    
    private:
        double vol = 0;
        double warning = 0;
        double critical = 0;


    public:
        Vol_draw();
        void set_state_of_alarms(int _warning,int _critical);

        ~Vol_draw();

    protected:
        void set_volume(int _vol);
        void draw_fulfilment(QPainter &painter,QSize size);
        QColor colors_interpolation(double vol);


};