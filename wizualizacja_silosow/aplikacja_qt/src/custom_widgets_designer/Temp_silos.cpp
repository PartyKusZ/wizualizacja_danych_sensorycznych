#include "Temp_silos.hpp"


Temp_silos::Temp_silos(QWidget *parent): QWidget(parent), Temp_draw() {;};


void Temp_silos::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    this->draw_outline(painter,this->size());
    this->draw_gradient(painter,this->size());
};


void Temp_silos::data_refresh(double _temp_1, double _temp_2){

}


Temp_silos::~Temp_silos(){;};