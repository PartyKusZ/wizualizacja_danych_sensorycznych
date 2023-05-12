#include "Vol_silos.hpp"


Vol_silos::Vol_silos(QWidget *parent): QWidget(parent), Vol_draw(){};


void Vol_silos::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    this->draw_outline(painter,this->size());
    this->draw_fulfilment(painter,this->size());

}


void Vol_silos::data_refresh(double _vol){
    this->set_volume(_vol);
    this->update();
}

Vol_silos::~Vol_silos(){}