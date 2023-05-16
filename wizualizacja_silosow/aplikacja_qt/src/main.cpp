#include <QApplication>
#include <iostream>
#include <thread>
#include "Main_window.hpp"
#include "Serial_port.hpp"
#include "Data.hpp"
#include "Port_error.hpp"
int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    Serial_port *serial_port = new Serial_port();
    Data data;
    std::thread data_reciver(&Serial_port::get_data,serial_port,&data);
   
    Port_error port_error(nullptr,nullptr);
    port_error.show();
    Main_window main_window(nullptr,&data);
    main_window.show();
    return app.exec();
}






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




