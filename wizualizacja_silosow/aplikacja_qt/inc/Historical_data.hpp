#pragma once
#include <QObject>
#include <QCalendarWidget>
#include <QDateEdit>
#include <QtCharts>
#include <QDebug>
#include <vector>
#include "Db_data.hpp"
#include "ui_Main_window.h"
#include "Database.hpp"
#include <iostream>
class Historical_data: public QObject{

    Q_OBJECT

    private:
        int parameter = 0;
        std::string date_start;
        std::string date_stop;
        std::vector<Db_data> db_data;
        Ui::Main_window &ui;
        Database &db;
        QCalendarWidget *calendar_1;
        QCalendarWidget *calendar_2;

        QChart *chart;
        QLineSeries *series;

        QDateTimeAxis *axisX;
        QValueAxis *axisY;

        std::string qdate_to_db_format(const QDate &date);



    public:
        Historical_data(Ui::Main_window &ui_, Database &db_);
        
        ~Historical_data();

    public slots:
        void set_data_1(const QDate &date);
        void set_data_2(const QDate &date);
        void show_chart();
};