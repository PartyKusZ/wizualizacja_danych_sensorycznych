/********************************************************************************
** Form generated from reading UI file 'Main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "All_param_silos_1.hpp"
#include "All_param_silos_2.hpp"

QT_BEGIN_NAMESPACE

class Ui_Main_window
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabs;
    QWidget *tab_all_param;
    QGridLayout *gridLayout_2;
    QWidget *all_param_alarms_silos_1;
    All_param_silos_2 *all_param_silos_2;
    QWidget *all_param_alarms_silos_2;
    All_param_silos_1 *all_param_silos_1;
    QWidget *tab_temp;
    QWidget *tab_humidity;
    QWidget *tab_volume;
    QWidget *tab_old_data;

    void setupUi(QWidget *Main_window)
    {
        if (Main_window->objectName().isEmpty())
            Main_window->setObjectName(QString::fromUtf8("Main_window"));
        Main_window->resize(1131, 659);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Main_window->sizePolicy().hasHeightForWidth());
        Main_window->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../obrazy/ikonka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Main_window->setWindowIcon(icon);
        Main_window->setStyleSheet(QString::fromUtf8("#Main_window {\n"
"background: #171a1e;\n"
"}\n"
"#tabs {\n"
"background: #010101;\n"
"}\n"
"QTabBar::tab{\n"
"background: #26292e;\n"
"color: white;\n"
"border-top-left-radius: 5px;\n"
"    border-top-right-radius: 5px;\n"
"    border-bottom-left-radius: 5px;\n"
"    border-bottom-right-radius: 5px;\n"
" min-width: 80px;\n"
"    padding: 5px;\n"
"    margin-right: 10px;\n"
"}\n"
"\n"
"QTabBar::tab:last {\n"
"    margin-right: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: #9b9a9f;\n"
"    color: white;\n"
"}\n"
""));
        gridLayout = new QGridLayout(Main_window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabs = new QTabWidget(Main_window);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setStyleSheet(QString::fromUtf8(""));
        tab_all_param = new QWidget();
        tab_all_param->setObjectName(QString::fromUtf8("tab_all_param"));
        tab_all_param->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #26292e;\n"
"	border-radius: 20px;\n"
"	margin: 10px;\n"
"}\n"
"\n"
"#tab_all_param{\n"
"	background: #010101;\n"
"}"));
        gridLayout_2 = new QGridLayout(tab_all_param);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        all_param_alarms_silos_1 = new QWidget(tab_all_param);
        all_param_alarms_silos_1->setObjectName(QString::fromUtf8("all_param_alarms_silos_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(all_param_alarms_silos_1->sizePolicy().hasHeightForWidth());
        all_param_alarms_silos_1->setSizePolicy(sizePolicy1);
        all_param_alarms_silos_1->setMinimumSize(QSize(50, 140));
        all_param_alarms_silos_1->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(all_param_alarms_silos_1, 2, 0, 1, 1);

        all_param_silos_2 = new All_param_silos_2(tab_all_param);
        all_param_silos_2->setObjectName(QString::fromUtf8("all_param_silos_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(all_param_silos_2->sizePolicy().hasHeightForWidth());
        all_param_silos_2->setSizePolicy(sizePolicy2);
        all_param_silos_2->setMinimumSize(QSize(263, 446));
        all_param_silos_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(all_param_silos_2, 1, 2, 1, 1);

        all_param_alarms_silos_2 = new QWidget(tab_all_param);
        all_param_alarms_silos_2->setObjectName(QString::fromUtf8("all_param_alarms_silos_2"));
        sizePolicy1.setHeightForWidth(all_param_alarms_silos_2->sizePolicy().hasHeightForWidth());
        all_param_alarms_silos_2->setSizePolicy(sizePolicy1);
        all_param_alarms_silos_2->setMinimumSize(QSize(50, 140));
        all_param_alarms_silos_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(all_param_alarms_silos_2, 2, 2, 1, 1);

        all_param_silos_1 = new All_param_silos_1(tab_all_param);
        all_param_silos_1->setObjectName(QString::fromUtf8("all_param_silos_1"));
        sizePolicy2.setHeightForWidth(all_param_silos_1->sizePolicy().hasHeightForWidth());
        all_param_silos_1->setSizePolicy(sizePolicy2);
        all_param_silos_1->setMinimumSize(QSize(262, 446));
        all_param_silos_1->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(all_param_silos_1, 1, 0, 1, 1);

        tabs->addTab(tab_all_param, QString());
        tab_temp = new QWidget();
        tab_temp->setObjectName(QString::fromUtf8("tab_temp"));
        tabs->addTab(tab_temp, QString());
        tab_humidity = new QWidget();
        tab_humidity->setObjectName(QString::fromUtf8("tab_humidity"));
        tabs->addTab(tab_humidity, QString());
        tab_volume = new QWidget();
        tab_volume->setObjectName(QString::fromUtf8("tab_volume"));
        tabs->addTab(tab_volume, QString());
        tab_old_data = new QWidget();
        tab_old_data->setObjectName(QString::fromUtf8("tab_old_data"));
        tabs->addTab(tab_old_data, QString());

        gridLayout->addWidget(tabs, 0, 0, 1, 1);


        retranslateUi(Main_window);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Main_window);
    } // setupUi

    void retranslateUi(QWidget *Main_window)
    {
        Main_window->setWindowTitle(QApplication::translate("Main_window", "Wizualizacja Silos\303\263w", nullptr));
        tabs->setTabText(tabs->indexOf(tab_all_param), QApplication::translate("Main_window", "Wszystkie parametry", nullptr));
        tabs->setTabText(tabs->indexOf(tab_temp), QApplication::translate("Main_window", "Temperatura", nullptr));
        tabs->setTabText(tabs->indexOf(tab_humidity), QApplication::translate("Main_window", "Wilgotno\305\233\304\207", nullptr));
        tabs->setTabText(tabs->indexOf(tab_volume), QApplication::translate("Main_window", "Wype\305\202nienie", nullptr));
        tabs->setTabText(tabs->indexOf(tab_old_data), QApplication::translate("Main_window", "Dane historyczne", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_window: public Ui_Main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
