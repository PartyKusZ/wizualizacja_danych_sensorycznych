#pragma once
#include <QWidget>
#include "ui_Main_window.h"
class Main_window: public QWidget, private Ui_Main_window{
    Q_OBJECT
    private: 
        int var;

    public:
        Main_window(QWidget *parent = nullptr);
        ~Main_window();
};