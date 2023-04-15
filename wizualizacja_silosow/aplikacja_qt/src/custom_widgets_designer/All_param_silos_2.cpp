#include "All_param_silos_2.hpp"

 All_param_silos_2::All_param_silos_2(QWidget *parent): QWidget(parent), Silos_position() {};

 void All_param_silos_2::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    auto c_size = this->size();
    QRect rect(this->get_x_offset(c_size.width()),this->get_y_offset(c_size.height()),this->get_width(c_size.width()),this->get_height(c_size.height())); // Pozycja i rozmiar prostokąta
    // Rysuj kontur prostokąta
    painter.setPen(QColor(255, 255, 255));
    painter.setBrush(Qt::NoBrush);
    painter.drawPolygon(this->get_trapezium(c_size.width(),c_size.height()));
    painter.drawRect(rect);

    // Rysuj wypełnienie prostokąta
    int fillWidth = static_cast<int>(rect.height() * 50 / 100);
    QRect fillRect(rect.x(), rect.y()+fillWidth,rect.width(), fillWidth );

    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(255, 255, 255));
    painter.drawRect(fillRect);
 }


All_param_silos_2::~All_param_silos_2(){};
 