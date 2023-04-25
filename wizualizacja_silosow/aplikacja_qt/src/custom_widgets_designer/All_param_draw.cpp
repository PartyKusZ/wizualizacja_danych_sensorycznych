#include "All_param_draw.hpp"

/**
 * @brief Construct a new All_param_draw::All_param_draw object
 * 
 */
All_param_draw::All_param_draw(): Silos_position() {;};



/**
 * @brief Drawing a fullfulment of silo
 * 
 * @param painter 
 * @param size size of the widget on which the silo is displayed
 * @param fulfilment  in precent
 */



void All_param_draw::draw_fulfilment(QPainter &painter,QSize size){
    auto c_size = size;
    QRect rect(this->get_x_offset(c_size.width()),this->get_y_offset(c_size.height()),this->get_width(c_size.width()),this->get_height(c_size.height())); // Pozycja i rozmiar prostokąta
    int empty = 100 - fulfilment; // knowledge of empty space is required 
    int fill_width = static_cast<int>(rect.height() * fulfilment / 100);
    int y_offset =  static_cast<int>(rect.height() * empty / 100);
    QRect fillRect(rect.x(), rect.y()+y_offset,rect.width(), fill_width );

    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(255, 255, 255));
    painter.drawRect(fillRect);
}


/**
 * @brief draws lines on which parameters are displayed 
 * 
 * @param painter painter
 * @param size size of the widget on which the silo is displayed
 */


 void All_param_draw::draw_lines(QPainter &painter,QSize size){

        QPen pen(Qt::darkCyan, 2, Qt::SolidLine);
        painter.setPen(pen);
        xp = this->get_x_offset(size.width());
        yp = this->get_y_offset(size.height());
        hp = this->get_height(size.height()) / 4;
        wp = this->get_width(size.width()) / 5;
        line_l.setLine(xp + wp, yp + hp, xp, 2 * yp); // slash line left
        line_l_2.setLine(line_l.x2(), line_l.y2(),line_l.x2() - 3 * wp,line_l.y2()); // straight line left
        line_r.setLine(xp + 4 * wp, yp + hp, xp + 5 * wp, 2 * yp); // slash line right
        line_r_2.setLine(line_r.x2(), line_r.y2(),line_r.x2() + 3 * wp,line_r.y2()); // straight line rigth


        painter.drawLine(line_l);
        painter.drawLine(line_l_2);
        painter.drawLine(line_r);
        painter.drawLine(line_r_2);
        

        line_l.translate(0 ,2*hp); // second slash line left
        line_l_2.translate(0 ,2*hp); // second straight line left
        line_r.translate(0 ,2*hp); // second slash line right
        line_r_2.translate(0 ,2*hp); // second straight line right

        painter.drawLine(line_l);
        painter.drawLine(line_l_2);
        painter.drawLine(line_r);
        painter.drawLine(line_r_2);
    }

/**
 * @brief Draws pixmaps of temperature and humidity symbols, displays text temperature and humidity values
 * 
 * @param painter painter
 */

void All_param_draw::draw_temp_hum(QPainter &painter){

    QPixmap temp_pixmap(":termometr.png");
    QPixmap hum_pixmap(":krople.png");
   
    QPen pen(Qt::white);
    painter.setPen(pen);


    QFont font = painter.font();
    font.setPointSize(25);
    painter.setFont(font);

    line_l_2.translate(0 ,-2*hp); // return to first position of streigth line (befor translate in draw lines) 
    line_r_2.translate(0 ,-2*hp); // return to first position of streigth line (befor translate in draw lines)


    painter.drawPixmap(line_l_2.x2(),line_l_2.y2()- 1.1*temp_pixmap.height(),temp_pixmap); // drawing temp_pixmap

    painter.drawPixmap(line_r_2.x1() + OFFSET,line_r_2.y1()- 1.1*hum_pixmap.height(),hum_pixmap); // drawing hum_pixmap


    painter.drawText(line_l_2.x2() + 1.2*temp_pixmap.width(),line_l_2.y2() - OFFSET,temp_1); // drawing temp_text

    painter.drawText(line_r_2.x1() + 1.5*hum_pixmap.width(),line_r_2.y1() - OFFSET,hum_1); // drawing hum_text 


    line_l_2.translate(0 ,2*hp); // second straight line left
    line_r_2.translate(0 ,2*hp); // second straight line right

    painter.drawPixmap(line_l_2.x2(),line_l_2.y2()- 1.1*temp_pixmap.height(),temp_pixmap); // drawing temp_pixmap 2

    painter.drawPixmap(line_r_2.x1() + OFFSET,line_r_2.y1()- 1.1*hum_pixmap.height(),hum_pixmap);  // drawing hum_pixmap 2


    painter.drawText(line_l_2.x2() + 1.2*temp_pixmap.width(),line_l_2.y2() - OFFSET,temp_2); // drawing temp_text 2 

    painter.drawText(line_r_2.x1() + 1.5*hum_pixmap.width(),line_r_2.y1() - OFFSET,hum_2);// drawing hum_text 2


    
    
    }


/**
 * @brief simply setter method for all silo param 
 * 
 * @param _temp_1 
 * @param _temp_2 
 * @param _hum_1 
 * @param _hum_2 
 * @param _fulfilment 
 */

void All_param_draw::set_values(QString _temp_1, QString _temp_2, QString _hum_1, QString _hum_2, int _fulfilment){
    temp_1 = _temp_1;
    temp_2 = _temp_2;
    hum_1 = _hum_1;
    hum_2 = _hum_2;
    fulfilment = _fulfilment;
}



/**
 * @brief Destroy the All_param_draw::All_param_draw object
 * 
 */
  All_param_draw::~All_param_draw(){;};



