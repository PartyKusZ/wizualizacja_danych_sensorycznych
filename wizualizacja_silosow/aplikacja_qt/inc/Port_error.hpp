#pragma once

#include <QStringListModel>
#include <QDir>
#include <QWidget>
#include <QDebug>
#include <QPushButton>
#include "Serial_port.hpp"
#include "ui_Port_error.h"
class Port_error: public QWidget, private Ui::Port_error{
    Q_OBJECT
    private:
        QDir dir;
        QStringList filters;
        QStringList files;
        QStringListModel *model;
        QString correct_port;

        Serial_port *port;

    private slots:
        void on_double_click(const QModelIndex &index);
        void confirm();
    public:
        Port_error(QWidget *parent, Serial_port *_port);
        ~Port_error();

};