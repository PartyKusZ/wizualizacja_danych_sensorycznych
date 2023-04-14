#pragma once
#include <QWidget>
#include <QPainter>
#include "ui_Main_window.h"


class Main_window : public QWidget, public Ui::Main_window{
    Q_OBJECT

    public:
        explicit Main_window(QWidget *parent = nullptr);
        ~Main_window();

};