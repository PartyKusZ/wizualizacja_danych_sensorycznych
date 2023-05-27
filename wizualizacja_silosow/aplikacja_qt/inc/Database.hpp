#pragma once 
#include <iostream>
#include <array>
#include <sqlite3.h>
#include <string>
#include <chrono>
#include <iomanip>
#include <utility>
#include <regex>
#include <vector>
#include <QObject>
#include <QTimer>
#include <Db_data.hpp>


constexpr char CREATE_SILO_1[] = "CREATE TABLE IF NOT EXISTS silo_1 ("  \
   "ID INTEGER PRIMARY KEY AUTOINCREMENT," \
   "Volume INT NOT NULL," \
   "Temperature_1 INT NOT NULL," \
   "Temperature_2 INT NOT NULL," \
   "Humidity_1 INT NOT NULL," \
   "Humidity_2 INT NOT NULL," \
   "Time TEXT NOT NULL," \
   "Date TEXT NOT NULL);";

constexpr char CREATE_SILO_2[] = "CREATE TABLE IF NOT EXISTS silo_2 ("  \
   "ID INTEGER PRIMARY KEY AUTOINCREMENT," \
   "Volume INT NOT NULL," \
   "Temperature_1 INT NULL," \
   "Temperature_2 INT NULL," \
   "Humidity_1 INT NULL," \
   "Humidity_2 INT NULL," \
   "Time TEXT NOT NULL," \
   "Date TEXT NOT NULL);";




class Database: public QObject{
    Q_OBJECT
    private:
        std::array<int,5> &silos_1; //!< store data for silo 1
        std::array<int,5> &silos_2; //!< store data for silo 2
        QTimer timer;
        sqlite3 *db;
        char *error_msg = 0;
        std::vector<Db_data> data;
        std::array<std::string,5> col_names = {"Volume","Temperature_1","Temperature_2","Humidity_1","Humidity_2"};

        std::array<std::regex,8> regexes = {std::regex("0_"), std::regex("1_"), std::regex("2_"), 
                                            std::regex("3_"), std::regex("4_"), std::regex("5_"), 
                                            std::regex("6_"), std::regex("7_") 
                                            };
        

        std::string INSERT_ = "INSERT INTO 0_ (Volume, Temperature_1, Temperature_2, Humidity_1, Humidity_2, Time, Date) " \
                "VALUES (1_, 2_, 3_, 4_, 5_, 6_, 7_);";
        std::string SELECT_ ="SELECT 0_, Time, Date FROM 1_ WHERE Date >= 2_ AND Date <= 3_;"; 


        static int sqlite_callback(void* data, int argc, char** argv, char** azColName);
        std::pair<std::string,std::string>  get_time_date();
    public:
        Database(const std::string db_name,std::array<int,5> &_silos_1,std::array<int,5> &_silos_2);
        void insert_silo_1(std::array<int,5> silos_1);
        void insert_silo_2(std::array<int,5> silos_2);
        std::vector<Db_data> select_silos_1(int col,std::string date_begin, std::string date_end);
        std::vector<Db_data> select_silos_2(int col,std::string date_begin, std::string date_end);
    public slots:
        void update();


        


};


/* Pierwsza werjsa która działa - po prostu liczby na osi X
Historical_data::Historical_data(Ui::Main_window &ui_, Database &db_): ui(ui_), db(db_){
    this->calendar_1 = new QCalendarWidget();
    this->calendar_2 = new QCalendarWidget();

    this->chart = new QChart();
    this->series  = new QLineSeries();
    this->chart->addSeries(series);


    this->axisX = new QValueAxis();
    this->axisY = new QValueAxis();
    chart->setAxisX(axisX, series);
    chart->setAxisY(axisY, series);
    

    this->chart->setTitle("Prosty Wykres");
    this->ui.chartview->setChart(chart);
    this->ui.chartview->setRenderHint(QPainter::Antialiasing);



    this->connect(this->ui.show_calendar_button_1,&QPushButton::clicked, this->calendar_1,&QCalendarWidget::show);
    this->connect(this->ui.show_calendar_button_2,&QPushButton::clicked, this->calendar_2,&QCalendarWidget::show);
    this->connect(this->calendar_1,&QCalendarWidget::clicked, this,&Historical_data::set_data_1);
    this->connect(this->calendar_2,&QCalendarWidget::clicked, this,&Historical_data::set_data_2);
    this->connect(this->ui.apply_button,&QPushButton::clicked,this,&Historical_data::show_chart);
    //qdate_to_db_format(this->ui.dateEdit->date());
    
}


void Historical_data::show_chart(){
  
    series->clear();
    db_data.clear();

    if(this->ui.radioButton->isChecked()){
        this->db_data = db.select_silos_1(this->ui.comboBox->currentIndex(),qdate_to_db_format(this->ui.dateEdit->date()),qdate_to_db_format(this->ui.dateEdit_2->date()));

    }
    if(this->ui.radioButton_2->isChecked()){
        this->db_data = db.select_silos_2(this->ui.comboBox->currentIndex(),qdate_to_db_format(this->ui.dateEdit->date()),qdate_to_db_format(this->ui.dateEdit_2->date()));  
    }
    
    for(int i = 0; i < this->db_data.size(); ++i){
        series->append(QPointF(i, this->db_data[i].data));
    }
    this->axisX->setRange(0,db_data.size());

    auto elem_max = std::max_element(db_data.begin(), db_data.end(), [](const Db_data& a, const Db_data& b) {
        return a.data < b.data;
    });

    this->axisY->setRange(0,elem_max->data);
    chart->update();
    }
*/