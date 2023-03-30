#pragma once

#include<QMainWindow>
#include"ui_main_window.h"

 class main_window: public QMainWindow, private Ui::MainWindow{
        Q_OBJECT
        public:
             main_window(QMainWindow *parent = nullptr);
            ~main_window();
         private:       
    };