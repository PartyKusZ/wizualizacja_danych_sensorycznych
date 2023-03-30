#include"main_window.hpp"
#include"ui_main_window.h"

main_window::main_window(QMainWindow *parent): QMainWindow(parent), Ui::MainWindow(){
    this->setupUi(this);
}
main_window::~main_window(){
}