#pragma once 
#include "Silos_position.hpp"
#include <QLine>


/**
 * @brief This class is responsible for drawing the fill and all information about the silo
 * 
 */

class All_param_draw: public Silos_position{

    private:
        constexpr static int OFFSET = 8; //!< to align icons and text

        int xp; //!< Silo x offset
        int yp; //!< Silo y offset
        int hp; //!< Info x line offset
        int wp; //!< Info y line offset

        QLine line_l;//!< left slash line
        QLine line_l_2;//!< left staright line
        QLine line_r;//!< right slash line
        QLine line_r_2;//!< right staright line

    public:
         All_param_draw();
        ~All_param_draw();
    protected:
        void draw_fulfilment(QPainter &painter,QSize size, int fulfilment);
        void draw_lines(QPainter &painter,QSize size);
        void draw_temp_hum(QPainter &painter);


};