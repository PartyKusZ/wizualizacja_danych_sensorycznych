#include "main_window.hpp"

Main_window::Main_window(QWidget *parent): QWidget(parent), Ui::main_window(){
    this->setupUi(this);
    this->var = 0;
    this->connect(this->pushButton,&QPushButton::clicked,this,&Main_window::increment_var);
    this->connect(this->pushButton_2,&QPushButton::clicked,this,&Main_window::decrement_var);
    this->connect(this->horizontalSlider,&QSlider::valueChanged,this,&Main_window::slider_var);
}
Main_window::~Main_window(){}

void Main_window::increment_var(){
    this->var++;
    this->lcdNumber->display(var);
    this->horizontalSlider->setValue(var);
}

void Main_window::decrement_var(){
    this->var--;
    this->lcdNumber->display(var);
    this->horizontalSlider->setValue(var);
}
void Main_window::slider_var(){
    this->var = this->horizontalSlider->value();
    this->lcdNumber->display(var);
    m = new Main_window;
    m->show();
}
