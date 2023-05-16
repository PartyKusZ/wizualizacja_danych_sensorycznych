#include "Port_error.hpp"

Port_error::Port_error(QWidget *parent, Serial_port *_port): QWidget(parent), Ui::Port_error(), dir("/dev"),model(new QStringListModel()),port(_port){
    this->setupUi(this);

    this->list_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    this->filters << "*ACM*";  // dodajemy pattern do filtra
    this->files = dir.entryList(filters, QDir::Files | QDir::System);
    this->model->setStringList(files);
    this->list_view->setModel(this->model);


    this->connect(this->list_view,&QListView::doubleClicked,this,&Port_error::on_double_click);
    this->connect(this->buttonBox->button(QDialogButtonBox::Apply),&QPushButton::clicked,this,&Port_error::confirm);

}

void Port_error::on_double_click(const QModelIndex &index){
    this->correct_port = index.data().toString();
    this->label_2->setText("Wybrany port: " + this->correct_port);
}

void Port_error::confirm(){
    this->port = new Serial_port(this->correct_port);
    this->close();
}


Port_error::~Port_error(){
    delete this->model;
}
