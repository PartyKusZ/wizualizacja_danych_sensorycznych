#include"main_window.hpp"
#include"ui_main_window.h"

main_window::main_window(QMainWindow *parent): QMainWindow(parent), Ui::MainWindow(){
    this->setupUi(this);
    this->connect(this->verticalSlider,SIGNAL(valueChanged(int)),this->progressBar_2,SLOT(setValue(int)));
}
main_window::~main_window(){
}