#include "Vol_draw.hpp"
Vol_draw::Vol_draw(): Silos_position() {;};

void Vol_draw:: set_volume(int _vol){

    this->vol = _vol;
    
}


void Vol_draw::set_state_of_alarms(int _warning,int _critical){
    this->warning = _warning;
    this->critical = _critical;
}


QColor Vol_draw::colors_interpolation(double vol){
    int r;
    int g;
    int b;
    double factor;
    if(vol < this->warning){
        factor = vol / this->warning;
        r = static_cast<int>(0 * (1 - factor) + 255 * factor);
        g = static_cast<int>(255 * (1 - factor) + 255 * factor);
        b = static_cast<int>(0 * (1 - factor) + 0 * factor);
        return QColor(r,g,b);
    }
    if(vol >= this->warning && vol < this->critical){
        factor = vol / this->critical;
        r = static_cast<int>(255 * (1 - factor) + 255 * factor);
        g = static_cast<int>(255 * (1 - factor) + 0 * factor);
        b = static_cast<int>(0 * (1 - factor) + 0 * factor);

        return QColor(r,g,b);
    }
    if(vol >= this->critical){
        return QColor(255,0,0);
    }
}




void Vol_draw::draw_fulfilment(QPainter &painter,QSize size){
    auto c_size = size;
    QRect rect(this->get_x_offset(c_size.width()),this->get_y_offset(c_size.height()),this->get_width(c_size.width()),this->get_height(c_size.height())); // Pozycja i rozmiar prostokąta
    int empty = 100 - vol; // knowledge of empty space is required 
    int fill_width = static_cast<int>(rect.height() * vol / 100);
    int y_offset =  static_cast<int>(rect.height() * empty / 100);
    QRect fillRect(rect.x(), rect.y()+y_offset,rect.width(), fill_width );

    painter.setPen(Qt::NoPen);
    painter.setBrush(this->colors_interpolation(vol));
    painter.drawRect(fillRect);
}

Vol_draw::~Vol_draw(){}