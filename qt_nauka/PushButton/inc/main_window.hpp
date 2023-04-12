#pragma once
#include <QWidget>
#include "ui_main_window.h"
class Main_window: public QWidget, private Ui::main_window{
    Q_OBJECT
    private: 
        int var;

    public:
        Main_window(QWidget *parent = nullptr);
        ~Main_window();
    private slots:
        void increment_var();
        void decrement_var();
        void slider_var();

};