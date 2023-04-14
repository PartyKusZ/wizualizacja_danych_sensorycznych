#pragma once
#include <QWidget>
#include <QPainter>

class All_param_silos_1: public QWidget{
private:
    /* data */
public:
    All_param_silos_1(QWidget *parent): QWidget(parent) {};

    void paintEvent(QPaintEvent *event) override{
         QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    
    QRect rect(100, 200, 30, 50); // Pozycja i rozmiar prostokąta
    // Rysuj kontur prostokąta
    painter.setPen(QColor(255, 255, 255));
    painter.setBrush(Qt::NoBrush);
    painter.drawRect(rect);

    // Rysuj wypełnienie prostokąta
    int fillWidth = static_cast<int>(rect.height() * 50 / 100);
    QRect fillRect(rect.x(), rect.y(),rect.width(), fillWidth );

    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(255, 255, 255));
    painter.drawRect(fillRect);
    }

     ~All_param_silos_1(){};
};
