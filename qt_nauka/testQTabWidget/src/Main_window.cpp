#include "Main_window.hpp"
Main_window::Main_window(QWidget *parent): QWidget(parent), Ui_Main_window(){
    this->setupUi(this);
    this->connect(this->pushButton, &QPushButton::clicked,this,&Main_window::QWidget::close);
}

Main_window::~Main_window(){}