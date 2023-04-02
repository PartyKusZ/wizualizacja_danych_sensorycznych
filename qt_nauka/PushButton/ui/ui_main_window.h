/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_window
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;

    void setupUi(QWidget *main_window)
    {
        if (main_window->objectName().isEmpty())
            main_window->setObjectName(QString::fromUtf8("main_window"));
        main_window->resize(576, 492);
        main_window->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #F5E7E2;\n"
"  border-radius: 15px;\n"
"  border: 2px solid #CDB2AB;\n"
"  color: #8B5F57;\n"
"  font-size: 20px;\n"
"  font-weight: bold;\n"
"  padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #CDB2AB;\n"
"  color: #F5E7E2;\n"
"  cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #8B5F57;\n"
"  color: #F5E7E2;\n"
"}\n"
"\n"
"\n"
"\n"
"QSlider {\n"
"  background-color: #F5E7E2;\n"
"  border: none;\n"
"  border-radius: 10px;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"  background-color: #CDB2AB;\n"
"  border-radius: 10px;\n"
"  height: 8px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"  background-color: #8B5F57;\n"
"  border: none;\n"
"  height: 20px;\n"
"  width: 20px;\n"
"  margin: -6px 0px;\n"
"  border-radius: 10px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"  background-color: #CDB2AB;\n"
"  border: none;\n"
"  height: 20px;\n"
"  width: 20px;\n"
"  margin: -6px 0px;\n"
"  border-radius: 10px;"
                        "\n"
"}\n"
"\n"
"QSlider::handle:horizontal:pressed {\n"
"  background-color: #F5E7E2;\n"
"  border: none;\n"
"  height: 20px;\n"
"  width: 20px;\n"
"  margin: -6px 0px;\n"
"  border-radius: 10px;\n"
"}\n"
"\n"
"QWidget {\n"
"    background-color: #00000;\n"
"	border-radius: 15px;\n"
"	 padding: 10px 20px;\n"
"}"));
        gridLayout_2 = new QGridLayout(main_window);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdNumber = new QLCDNumber(main_window);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(main_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(main_window);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalSlider = new QSlider(main_window);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setBaseSize(QSize(0, 5));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 1, 0, 1, 1);


        retranslateUi(main_window);

        QMetaObject::connectSlotsByName(main_window);
    } // setupUi

    void retranslateUi(QWidget *main_window)
    {
        main_window->setWindowTitle(QApplication::translate("main_window", "Form", nullptr));
        pushButton->setText(QApplication::translate("main_window", "inkrement", nullptr));
        pushButton_2->setText(QApplication::translate("main_window", "dekrement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
