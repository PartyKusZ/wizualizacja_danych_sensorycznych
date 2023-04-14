#include "Main_window.hpp"

Main_window::Main_window(QWidget *parent): QWidget(parent), Ui::Main_window(){
    this->setupUi(this);
}   

void Main_window::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    QRect rect(10, 10, 200, 100); // Pozycja i rozmiar prostokąta

    // Rysuj kontur prostokąta
    painter.setPen(QColor(255, 255, 255));
    painter.setBrush(Qt::NoBrush);
    painter.drawRect(rect);

    // Rysuj wypełnienie prostokąta
    int fillWidth = static_cast<int>(rect.width() * 50 / 100);
    QRect fillRect(rect.x(), rect.y(), fillWidth, rect.height());

    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(255, 255, 255));
    painter.drawRect(fillRect);
}



Main_window::~Main_window(){}
