#include <QApplication>
#include <QtCharts>
#include <iostream>
#include <thread>
#include "Main_window.hpp"
#include "Serial_port.hpp"
#include "Data.hpp"
#include "Port_error.hpp"
#include "Database.hpp"
int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    Serial_port *serial_port;
    try{
        serial_port  = new Serial_port();
        std::cerr << "w bloku trow";

    }catch(LibSerial::OpenFailed& e){
        std::cerr << "w bloku catch";
        Port_error port_error;
        port_error(serial_port);
    }
    Data data;
    std::thread data_reciver(&Serial_port::get_data,serial_port,&data);
    Main_window main_window(nullptr,&data);
    main_window.show();
    return app.exec();
}



// #include <QApplication>
// #include <QDateEdit>
// #include <QCalendarWidget>
// #include <QDebug>

// #include <QApplication>
// #include <QDateEdit>
// #include <QCalendarWidget>
// #include <QDebug>

// #include <QApplication>
// #include <QDateEdit>
// #include <QCalendarWidget>
// #include <QDebug>
// #include <QVBoxLayout>
// #include <QWidget>
// #include <iostream>

// int main(int argc, char *argv[]) {
//     QApplication app(argc, argv);

//     QWidget mainWidget;
//     QVBoxLayout layout(&mainWidget);
//     QDateEdit dateEdit;
//     QCalendarWidget calendarWidget;

//     layout.addWidget(&dateEdit);
//     layout.addWidget(&calendarWidget);
//     //calendarWidget.hide();

//     QObject::connect(&dateEdit, &QDateEdit::dateChanged, [&](const QDate &date){
//         auto x = date.toString("yyyy-MM-dd");
//         auto y = x.toStdString();
//         //std::replace(y.begin(), y.end(), '\"', '\'');
//         std::cout << "Wybrana data: " << y << std::endl;  
//     });

//     QObject::connect(&calendarWidget, &QCalendarWidget::clicked, [&](const QDate &date){
//         dateEdit.setDate(date);
//         //calendarWidget.hide();
//     });

//     QObject::connect(&dateEdit, &QDateEdit::editingFinished, [&](){
//         calendarWidget.setSelectedDate(dateEdit.date());
//         calendarWidget.show();
//     });

//     dateEdit.setDate(QDate::currentDate());
//     mainWidget.show();

//     return app.exec();
// }



// #include <QApplication>
// #include <QVBoxLayout>
// #include <QListView>
// #include <QStringListModel>
// #include <QDebug>
// #include <QDir>
// #include <QWidget>

// int main(int argc, char *argv[]) {
//     QApplication app(argc, argv);
//     QWidget widget;
//     QListView listView;
//     QString currentFile;

//     listView.setEditTriggers(QAbstractItemView::NoEditTriggers);

//     QDir dir("/dev");
//     QStringList filters;
//     filters << "*ACM*";  // dodajemy pattern do filtra
//     QStringList files = dir.entryList(filters, QDir::Files | QDir::System);

//     QStringListModel *model = new QStringListModel();
//     model->setStringList(files);
//     listView.setModel(model);

//     QObject::connect(&listView, &QListView::doubleClicked, [&currentFile, &model](const QModelIndex &index) {
//         currentFile = model->data(index).toString();
//         qDebug() << "Wybrany plik:" << currentFile;
//     });

//     QVBoxLayout *layout = new QVBoxLayout;
//     layout->addWidget(&listView);
//     widget.setLayout(layout);

//     widget.show();

//     return app.exec();
// }




