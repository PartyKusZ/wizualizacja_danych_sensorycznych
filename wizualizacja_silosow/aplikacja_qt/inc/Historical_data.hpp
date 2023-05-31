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

/**
 * @brief class of card handling historical data
 * 
 */
class Historical_data: public QObject{

    Q_OBJECT

    private:
        std::string date_start; //!< beginning of the time period 
        std::string date_stop; //!< end of the time period 
        std::vector<Db_data> db_data; //!< data received from the database
        Ui::Main_window &ui; //!< Ui
        Database &db;//!< database
        QCalendarWidget *calendar_1; 
        QCalendarWidget *calendar_2;

        QChart *chart;
        QLineSeries *series;

        QCategoryAxis *axisX;
        QValueAxis *axisY;

        std::string qdate_to_db_format(const QDate &date);

        QString chart_title;




    public:
        Historical_data(Ui::Main_window &ui_, Database &db_);

        void chart_title_translate(const QString &title);

        ~Historical_data();

    public slots:
        void set_data_1(const QDate &date);
        void set_data_2(const QDate &date);
        void show_chart();
};