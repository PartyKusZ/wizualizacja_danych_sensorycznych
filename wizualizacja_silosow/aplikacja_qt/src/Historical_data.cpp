#include "Historical_data.hpp"

/**
 * @brief Construct a new Historical_data::Historical_data object
 * @details sets appropriate parameters for the ui elements and connects their signals and slots 
 * @param ui_ Ui
 * @param db_ database 
 */

Historical_data::Historical_data(Ui::Main_window &ui_, Database &db_): ui(ui_), db(db_){
    this->calendar_1 = new QCalendarWidget();
    this->calendar_2 = new QCalendarWidget();

    this->chart = new QChart();
    this->series  = new QLineSeries();
    this->chart->addSeries(series);

    this->axisX = new QCategoryAxis(); // Zmieniamy na QCategoryAxis
    this->axisY = new QValueAxis();
    chart->setAxisX(axisX, series);
    chart->setAxisY(axisY, series);
    
    this->chart_title = tr("Wykres");
    this->chart_title_translate(this->chart_title);
    this->ui.chartview->setChart(chart);
    this->ui.chartview->setRenderHint(QPainter::Antialiasing);

    this->connect(this->ui.show_calendar_button_1,&QPushButton::clicked, this->calendar_1,&QCalendarWidget::show);
    this->connect(this->ui.show_calendar_button_2,&QPushButton::clicked, this->calendar_2,&QCalendarWidget::show);
    this->connect(this->calendar_1,&QCalendarWidget::clicked, this,&Historical_data::set_data_1);
    this->connect(this->calendar_2,&QCalendarWidget::clicked, this,&Historical_data::set_data_2);
    this->connect(this->ui.apply_button,&QPushButton::clicked,this,&Historical_data::show_chart);
    //qdate_to_db_format(this->ui.dateEdit->date());
    
}

/**
 * @brief changes the date representation from Qt style to the style used in the database
 * 
 * @param date 
 * @return std::string database-style date
 */

std::string Historical_data::qdate_to_db_format(const QDate &date){
    std::string d;
    std::string m;
    auto year = date.year();
    auto month = date.month();
    auto day = date.day();
    if(month < 10){
        m = "0"+std::to_string(month);
    }else{
        m = std::to_string(month);
    }
    if(day < 10){
        d = "0"+std::to_string(day);
    }else{
        d = std::to_string(day);
    }

    return std::to_string(year) + "-" + m +"-" + d;
    
}


void Historical_data::chart_title_translate(const QString &title){

    this->chart_title = QApplication::translate("Historical_data",title.toStdString().c_str(),nullptr);
    this->chart->setTitle(this->chart_title);
    qDebug() << this->chart_title;
}



    /**
     * @brief supports the emelent ui for date editing
     * 
     * @param date 
     */
void Historical_data::set_data_1(const QDate &date){
    this->ui.dateEdit->setDate(date);
}

/**
 * @brief supports the emelent ui for date editing
 * 
 * @param date 
 */
void Historical_data::set_data_2(const QDate &date){
    this->ui.dateEdit_2->setDate(date);
}

/**
 * @brief method retrieves data from the database and places them on the chart
 * 
 */

void Historical_data::show_chart(){
  
    series->clear();
    db_data.clear();

    if(this->ui.radioButton->isChecked()){
        this->db_data = db.select_silos_1(this->ui.comboBox->currentIndex(),qdate_to_db_format(this->ui.dateEdit->date()),qdate_to_db_format(this->ui.dateEdit_2->date()));

    }
    if(this->ui.radioButton_2->isChecked()){
        this->db_data = db.select_silos_2(this->ui.comboBox->currentIndex(),qdate_to_db_format(this->ui.dateEdit->date()),qdate_to_db_format(this->ui.dateEdit_2->date()));  
    }
    
    std::string lastDateSeen;
    for(int i = 0; i < this->db_data.size(); ++i){
        series->append(i, this->db_data[i].data); // Dodajemy indeks zamiast czasu
        if(i % 30 == 0 || (i > 0 && this->db_data[i].date != lastDateSeen)) { // Dodajemy etykietę tylko co 30 danych lub gdy data się zmienia
            std::string label = (i > 0 && this->db_data[i].date != lastDateSeen) ? this->db_data[i].date : this->db_data[i].time;
            axisX->append(QString::fromStdString(label), i); // Dodajemy etykietę czasu lub daty do indeksu
        }
        lastDateSeen = this->db_data[i].date;
    }
    axisX->setRange(0, this->db_data.size() - 1); // Ustawiamy wartości początkowe i końcowe dla osi X
    axisX->setLabelsAngle(25);

    auto elem_max = std::max_element(db_data.begin(), db_data.end(), [](const Db_data& a, const Db_data& b) {
        return a.data < b.data;
    });

    this->axisY->setRange(0,elem_max->data);
    chart->update();
}

/**
 * @brief Destroy the Historical_data::Historical_data object
 * 
 */
Historical_data::~Historical_data(){
    delete this->calendar_1;
    delete this->calendar_2;
    delete this->chart;
    delete this->series;   

}