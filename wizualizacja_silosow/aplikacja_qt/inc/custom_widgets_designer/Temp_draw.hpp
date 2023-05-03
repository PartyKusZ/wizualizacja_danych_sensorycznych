#pragma once    
#include "Silos_position.hpp"

/**
 * @brief This class is responsible for drawing the temperature gradient, tab temp
 * 
 */

class Temp_draw: public Silos_position{
    
    private:
        QString temp_1 = "Nie ustawiono!";
        QString temp_2 = "Nie ustawiono!";

    public:
        Temp_draw();

        void set_temperature(QString _temp_1, QString _temp_2);

        ~Temp_draw();

    protected:
        void draw_gradient(QPainter &painter,QSize size);


};