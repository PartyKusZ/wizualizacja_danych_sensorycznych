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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "All_param_silos.hpp"
#include "Temp_silos.hpp"

QT_BEGIN_NAMESPACE

class Ui_Main_window
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabs;
    QWidget *tab_all_param;
    QGridLayout *gridLayout_2;
    QWidget *all_param_alarms_silos_1;
    QGridLayout *gridLayout_3;
    QLabel *hum_alarms_al_1;
    QLabel *volume_ico_al_1;
    QLabel *temp_ico_al_1;
    QLabel *volume_alarms_al_1;
    QLabel *temp_alarms_al_1;
    QLabel *volume_info_alarms_al_1;
    QLabel *temp_info_alarms_al_1;
    QLabel *hum_info_alarms_al_1;
    QLabel *hum_ico_al_1;
    All_param_silos *all_param_silos_2;
    QGridLayout *gridLayout_6;
    QLabel *volume_info_al_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *all_param_alarms_silos_2;
    QGridLayout *gridLayout_4;
    QLabel *temp_ico_al_2;
    QLabel *volume_info_alarms_al_2;
    QLabel *temp_info_alarms_al_2;
    QLabel *hum_alarms_al_2;
    QLabel *hum_info_alarms_al_2;
    QLabel *volume_ico_al_2;
    QLabel *temp_alarms_al_2;
    QLabel *hum_ico_al_2;
    QLabel *volume_alarms_al_2;
    All_param_silos *all_param_silos_1;
    QGridLayout *gridLayout_5;
    QLabel *volume_info_al_1;
    QSpacerItem *verticalSpacer;
    QWidget *tab_temp;
    QGridLayout *gridLayout_15;
    QWidget *temp_alarms_silos_2;
    QGridLayout *gridLayout_7;
    QLabel *temp_alarms_temp_2;
    QLabel *temp_info_alarms_temp_2;
    QLabel *temp_ico_temp_2;
    QPushButton *temp_alarms_settings_button_silos_2;
    Temp_silos *temp_silos_1;
    QGridLayout *gridLayout_13;
    Temp_silos *temp_silos_2;
    QGridLayout *gridLayout_14;
    QWidget *temp_alarms_silos_1;
    QGridLayout *gridLayout_11;
    QLabel *temp_ico_temp_1;
    QLabel *temp_info_alarms_temp_1;
    QLabel *temp_alarms_temp_1;
    QPushButton *temp_alarms_settings_button_silos_1;
    QWidget *tab_humidity;
    QWidget *tab_volume;
    QWidget *tab_old_data;

    void setupUi(QWidget *Main_window)
    {
        if (Main_window->objectName().isEmpty())
            Main_window->setObjectName(QString::fromUtf8("Main_window"));
        Main_window->resize(1144, 679);
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
        tabs->setUsesScrollButtons(false);
        tabs->setTabBarAutoHide(false);
        tab_all_param = new QWidget();
        tab_all_param->setObjectName(QString::fromUtf8("tab_all_param"));
        tab_all_param->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #26292e;\n"
"	border-radius: 20px;\n"
"margin: 10px;\n"
"}\n"
"\n"
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
        all_param_alarms_silos_1->setMinimumSize(QSize(50, 160));
        all_param_alarms_silos_1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #ffffff\n"
"}"));
        gridLayout_3 = new QGridLayout(all_param_alarms_silos_1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        hum_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        hum_alarms_al_1->setObjectName(QString::fromUtf8("hum_alarms_al_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hum_alarms_al_1->sizePolicy().hasHeightForWidth());
        hum_alarms_al_1->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(15);
        hum_alarms_al_1->setFont(font);

        gridLayout_3->addWidget(hum_alarms_al_1, 5, 0, 1, 1);

        volume_ico_al_1 = new QLabel(all_param_alarms_silos_1);
        volume_ico_al_1->setObjectName(QString::fromUtf8("volume_ico_al_1"));
        sizePolicy2.setHeightForWidth(volume_ico_al_1->sizePolicy().hasHeightForWidth());
        volume_ico_al_1->setSizePolicy(sizePolicy2);
        volume_ico_al_1->setMinimumSize(QSize(50, 50));
        QFont font1;
        font1.setKerning(true);
        volume_ico_al_1->setFont(font1);
        volume_ico_al_1->setStyleSheet(QString::fromUtf8(""));
        volume_ico_al_1->setTextFormat(Qt::AutoText);
        volume_ico_al_1->setPixmap(QPixmap(QString::fromUtf8(":/ikona_stop_t\305\202o.png")));
        volume_ico_al_1->setScaledContents(false);
        volume_ico_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        volume_ico_al_1->setOpenExternalLinks(false);

        gridLayout_3->addWidget(volume_ico_al_1, 1, 2, 1, 1);

        temp_ico_al_1 = new QLabel(all_param_alarms_silos_1);
        temp_ico_al_1->setObjectName(QString::fromUtf8("temp_ico_al_1"));
        sizePolicy2.setHeightForWidth(temp_ico_al_1->sizePolicy().hasHeightForWidth());
        temp_ico_al_1->setSizePolicy(sizePolicy2);
        temp_ico_al_1->setMinimumSize(QSize(50, 50));
        temp_ico_al_1->setPixmap(QPixmap(QString::fromUtf8(":/ikona_warning_t\305\202o.png")));
        temp_ico_al_1->setScaledContents(false);
        temp_ico_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temp_ico_al_1->setWordWrap(false);
        temp_ico_al_1->setOpenExternalLinks(false);

        gridLayout_3->addWidget(temp_ico_al_1, 4, 2, 1, 1);

        volume_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        volume_alarms_al_1->setObjectName(QString::fromUtf8("volume_alarms_al_1"));
        sizePolicy2.setHeightForWidth(volume_alarms_al_1->sizePolicy().hasHeightForWidth());
        volume_alarms_al_1->setSizePolicy(sizePolicy2);
        volume_alarms_al_1->setMinimumSize(QSize(50, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        volume_alarms_al_1->setFont(font2);

        gridLayout_3->addWidget(volume_alarms_al_1, 1, 0, 1, 1);

        temp_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        temp_alarms_al_1->setObjectName(QString::fromUtf8("temp_alarms_al_1"));
        sizePolicy2.setHeightForWidth(temp_alarms_al_1->sizePolicy().hasHeightForWidth());
        temp_alarms_al_1->setSizePolicy(sizePolicy2);
        temp_alarms_al_1->setFont(font);

        gridLayout_3->addWidget(temp_alarms_al_1, 4, 0, 1, 1);

        volume_info_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        volume_info_alarms_al_1->setObjectName(QString::fromUtf8("volume_info_alarms_al_1"));
        sizePolicy2.setHeightForWidth(volume_info_alarms_al_1->sizePolicy().hasHeightForWidth());
        volume_info_alarms_al_1->setSizePolicy(sizePolicy2);
        volume_info_alarms_al_1->setMinimumSize(QSize(50, 50));
        volume_info_alarms_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(volume_info_alarms_al_1, 1, 1, 1, 1);

        temp_info_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        temp_info_alarms_al_1->setObjectName(QString::fromUtf8("temp_info_alarms_al_1"));
        sizePolicy2.setHeightForWidth(temp_info_alarms_al_1->sizePolicy().hasHeightForWidth());
        temp_info_alarms_al_1->setSizePolicy(sizePolicy2);
        temp_info_alarms_al_1->setMinimumSize(QSize(0, 0));
        temp_info_alarms_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(temp_info_alarms_al_1, 4, 1, 1, 1);

        hum_info_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        hum_info_alarms_al_1->setObjectName(QString::fromUtf8("hum_info_alarms_al_1"));
        sizePolicy2.setHeightForWidth(hum_info_alarms_al_1->sizePolicy().hasHeightForWidth());
        hum_info_alarms_al_1->setSizePolicy(sizePolicy2);
        hum_info_alarms_al_1->setMinimumSize(QSize(0, 0));
        hum_info_alarms_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(hum_info_alarms_al_1, 5, 1, 1, 1);

        hum_ico_al_1 = new QLabel(all_param_alarms_silos_1);
        hum_ico_al_1->setObjectName(QString::fromUtf8("hum_ico_al_1"));
        sizePolicy2.setHeightForWidth(hum_ico_al_1->sizePolicy().hasHeightForWidth());
        hum_ico_al_1->setSizePolicy(sizePolicy2);
        hum_ico_al_1->setMinimumSize(QSize(50, 50));
        hum_ico_al_1->setPixmap(QPixmap(QString::fromUtf8(":/ikona_warning.png")));
        hum_ico_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(hum_ico_al_1, 5, 2, 1, 1);


        gridLayout_2->addWidget(all_param_alarms_silos_1, 2, 0, 1, 1);

        all_param_silos_2 = new All_param_silos(tab_all_param);
        all_param_silos_2->setObjectName(QString::fromUtf8("all_param_silos_2"));
        sizePolicy2.setHeightForWidth(all_param_silos_2->sizePolicy().hasHeightForWidth());
        all_param_silos_2->setSizePolicy(sizePolicy2);
        all_param_silos_2->setMinimumSize(QSize(263, 446));
        all_param_silos_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #ffffff\n"
"}"));
        gridLayout_6 = new QGridLayout(all_param_silos_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        volume_info_al_2 = new QLabel(all_param_silos_2);
        volume_info_al_2->setObjectName(QString::fromUtf8("volume_info_al_2"));
        QFont font3;
        font3.setPointSize(25);
        volume_info_al_2->setFont(font3);
        volume_info_al_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(volume_info_al_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 425, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_6->addItem(verticalSpacer_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(all_param_silos_2, 1, 2, 1, 1);

        all_param_alarms_silos_2 = new QWidget(tab_all_param);
        all_param_alarms_silos_2->setObjectName(QString::fromUtf8("all_param_alarms_silos_2"));
        sizePolicy1.setHeightForWidth(all_param_alarms_silos_2->sizePolicy().hasHeightForWidth());
        all_param_alarms_silos_2->setSizePolicy(sizePolicy1);
        all_param_alarms_silos_2->setMinimumSize(QSize(50, 160));
        all_param_alarms_silos_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #ffffff;\n"
"}"));
        gridLayout_4 = new QGridLayout(all_param_alarms_silos_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        temp_ico_al_2 = new QLabel(all_param_alarms_silos_2);
        temp_ico_al_2->setObjectName(QString::fromUtf8("temp_ico_al_2"));
        sizePolicy2.setHeightForWidth(temp_ico_al_2->sizePolicy().hasHeightForWidth());
        temp_ico_al_2->setSizePolicy(sizePolicy2);
        temp_ico_al_2->setMinimumSize(QSize(50, 50));
        temp_ico_al_2->setPixmap(QPixmap(QString::fromUtf8(":/ikona_stop_t\305\202o.png")));
        temp_ico_al_2->setScaledContents(false);
        temp_ico_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temp_ico_al_2->setWordWrap(false);
        temp_ico_al_2->setOpenExternalLinks(false);

        gridLayout_4->addWidget(temp_ico_al_2, 1, 2, 1, 1);

        volume_info_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        volume_info_alarms_al_2->setObjectName(QString::fromUtf8("volume_info_alarms_al_2"));
        sizePolicy2.setHeightForWidth(volume_info_alarms_al_2->sizePolicy().hasHeightForWidth());
        volume_info_alarms_al_2->setSizePolicy(sizePolicy2);
        volume_info_alarms_al_2->setMinimumSize(QSize(50, 50));
        volume_info_alarms_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(volume_info_alarms_al_2, 0, 1, 1, 1);

        temp_info_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        temp_info_alarms_al_2->setObjectName(QString::fromUtf8("temp_info_alarms_al_2"));
        sizePolicy2.setHeightForWidth(temp_info_alarms_al_2->sizePolicy().hasHeightForWidth());
        temp_info_alarms_al_2->setSizePolicy(sizePolicy2);
        temp_info_alarms_al_2->setMinimumSize(QSize(0, 0));
        temp_info_alarms_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(temp_info_alarms_al_2, 1, 1, 1, 1);

        hum_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        hum_alarms_al_2->setObjectName(QString::fromUtf8("hum_alarms_al_2"));
        sizePolicy2.setHeightForWidth(hum_alarms_al_2->sizePolicy().hasHeightForWidth());
        hum_alarms_al_2->setSizePolicy(sizePolicy2);
        hum_alarms_al_2->setFont(font);

        gridLayout_4->addWidget(hum_alarms_al_2, 2, 0, 1, 1);

        hum_info_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        hum_info_alarms_al_2->setObjectName(QString::fromUtf8("hum_info_alarms_al_2"));
        sizePolicy2.setHeightForWidth(hum_info_alarms_al_2->sizePolicy().hasHeightForWidth());
        hum_info_alarms_al_2->setSizePolicy(sizePolicy2);
        hum_info_alarms_al_2->setMinimumSize(QSize(0, 0));
        hum_info_alarms_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(hum_info_alarms_al_2, 2, 1, 1, 1);

        volume_ico_al_2 = new QLabel(all_param_alarms_silos_2);
        volume_ico_al_2->setObjectName(QString::fromUtf8("volume_ico_al_2"));
        sizePolicy2.setHeightForWidth(volume_ico_al_2->sizePolicy().hasHeightForWidth());
        volume_ico_al_2->setSizePolicy(sizePolicy2);
        volume_ico_al_2->setMinimumSize(QSize(50, 50));
        volume_ico_al_2->setFont(font1);
        volume_ico_al_2->setStyleSheet(QString::fromUtf8(""));
        volume_ico_al_2->setTextFormat(Qt::AutoText);
        volume_ico_al_2->setPixmap(QPixmap(QString::fromUtf8(":/ok.png")));
        volume_ico_al_2->setScaledContents(false);
        volume_ico_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        volume_ico_al_2->setOpenExternalLinks(false);

        gridLayout_4->addWidget(volume_ico_al_2, 0, 2, 1, 1);

        temp_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        temp_alarms_al_2->setObjectName(QString::fromUtf8("temp_alarms_al_2"));
        sizePolicy2.setHeightForWidth(temp_alarms_al_2->sizePolicy().hasHeightForWidth());
        temp_alarms_al_2->setSizePolicy(sizePolicy2);
        temp_alarms_al_2->setFont(font);

        gridLayout_4->addWidget(temp_alarms_al_2, 1, 0, 1, 1);

        hum_ico_al_2 = new QLabel(all_param_alarms_silos_2);
        hum_ico_al_2->setObjectName(QString::fromUtf8("hum_ico_al_2"));
        sizePolicy2.setHeightForWidth(hum_ico_al_2->sizePolicy().hasHeightForWidth());
        hum_ico_al_2->setSizePolicy(sizePolicy2);
        hum_ico_al_2->setMinimumSize(QSize(50, 50));
        hum_ico_al_2->setPixmap(QPixmap(QString::fromUtf8(":/ikona_warning.png")));
        hum_ico_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(hum_ico_al_2, 2, 2, 1, 1);

        volume_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        volume_alarms_al_2->setObjectName(QString::fromUtf8("volume_alarms_al_2"));
        sizePolicy2.setHeightForWidth(volume_alarms_al_2->sizePolicy().hasHeightForWidth());
        volume_alarms_al_2->setSizePolicy(sizePolicy2);
        volume_alarms_al_2->setMinimumSize(QSize(50, 50));
        volume_alarms_al_2->setFont(font2);

        gridLayout_4->addWidget(volume_alarms_al_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(all_param_alarms_silos_2, 2, 2, 1, 1);

        all_param_silos_1 = new All_param_silos(tab_all_param);
        all_param_silos_1->setObjectName(QString::fromUtf8("all_param_silos_1"));
        sizePolicy2.setHeightForWidth(all_param_silos_1->sizePolicy().hasHeightForWidth());
        all_param_silos_1->setSizePolicy(sizePolicy2);
        all_param_silos_1->setMinimumSize(QSize(262, 446));
        all_param_silos_1->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"QLabel{\n"
"	color: #ffffff\n"
"}"));
        gridLayout_5 = new QGridLayout(all_param_silos_1);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        volume_info_al_1 = new QLabel(all_param_silos_1);
        volume_info_al_1->setObjectName(QString::fromUtf8("volume_info_al_1"));
        volume_info_al_1->setFont(font3);
        volume_info_al_1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(volume_info_al_1, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 361, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_2->addWidget(all_param_silos_1, 1, 0, 1, 1);

        tabs->addTab(tab_all_param, QString());
        tab_temp = new QWidget();
        tab_temp->setObjectName(QString::fromUtf8("tab_temp"));
        tab_temp->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #26292e;\n"
"	border-radius: 20px;\n"
"margin: 10px;\n"
"}\n"
"\n"
"\n"
"#tab_temp{\n"
"	background: #010101;\n"
"}"));
        gridLayout_15 = new QGridLayout(tab_temp);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        temp_alarms_silos_2 = new QWidget(tab_temp);
        temp_alarms_silos_2->setObjectName(QString::fromUtf8("temp_alarms_silos_2"));
        sizePolicy1.setHeightForWidth(temp_alarms_silos_2->sizePolicy().hasHeightForWidth());
        temp_alarms_silos_2->setSizePolicy(sizePolicy1);
        temp_alarms_silos_2->setMinimumSize(QSize(50, 160));
        temp_alarms_silos_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #ffffff\n"
"}\n"
"QPushButton{\n"
"background: #9b9a9f;\n"
"color: white;\n"
"border-top-left-radius: 5px;\n"
"    border-top-right-radius: 5px;\n"
"    border-bottom-left-radius: 5px;\n"
"    border-bottom-right-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"                         background-color: #b5b5b5;  \n"
"                     }\n"
"                         QPushButton:pressed {\n"
"                         background-color: #808080;  \n"
"                         }"));
        gridLayout_7 = new QGridLayout(temp_alarms_silos_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        temp_alarms_temp_2 = new QLabel(temp_alarms_silos_2);
        temp_alarms_temp_2->setObjectName(QString::fromUtf8("temp_alarms_temp_2"));
        sizePolicy2.setHeightForWidth(temp_alarms_temp_2->sizePolicy().hasHeightForWidth());
        temp_alarms_temp_2->setSizePolicy(sizePolicy2);
        temp_alarms_temp_2->setFont(font);

        gridLayout_7->addWidget(temp_alarms_temp_2, 0, 0, 1, 1);

        temp_info_alarms_temp_2 = new QLabel(temp_alarms_silos_2);
        temp_info_alarms_temp_2->setObjectName(QString::fromUtf8("temp_info_alarms_temp_2"));
        sizePolicy2.setHeightForWidth(temp_info_alarms_temp_2->sizePolicy().hasHeightForWidth());
        temp_info_alarms_temp_2->setSizePolicy(sizePolicy2);
        temp_info_alarms_temp_2->setMinimumSize(QSize(0, 0));
        temp_info_alarms_temp_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(temp_info_alarms_temp_2, 0, 1, 1, 1);

        temp_ico_temp_2 = new QLabel(temp_alarms_silos_2);
        temp_ico_temp_2->setObjectName(QString::fromUtf8("temp_ico_temp_2"));
        sizePolicy2.setHeightForWidth(temp_ico_temp_2->sizePolicy().hasHeightForWidth());
        temp_ico_temp_2->setSizePolicy(sizePolicy2);
        temp_ico_temp_2->setMinimumSize(QSize(50, 50));
        temp_ico_temp_2->setPixmap(QPixmap(QString::fromUtf8(":/ikona_stop_t\305\202o.png")));
        temp_ico_temp_2->setScaledContents(false);
        temp_ico_temp_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temp_ico_temp_2->setWordWrap(false);
        temp_ico_temp_2->setOpenExternalLinks(false);

        gridLayout_7->addWidget(temp_ico_temp_2, 0, 2, 1, 1);

        temp_alarms_settings_button_silos_2 = new QPushButton(temp_alarms_silos_2);
        temp_alarms_settings_button_silos_2->setObjectName(QString::fromUtf8("temp_alarms_settings_button_silos_2"));
        temp_alarms_settings_button_silos_2->setMinimumSize(QSize(0, 50));
        temp_alarms_settings_button_silos_2->setFont(font);

        gridLayout_7->addWidget(temp_alarms_settings_button_silos_2, 1, 0, 1, 3);


        gridLayout_15->addWidget(temp_alarms_silos_2, 1, 1, 1, 1);

        temp_silos_1 = new Temp_silos(tab_temp);
        temp_silos_1->setObjectName(QString::fromUtf8("temp_silos_1"));
        sizePolicy2.setHeightForWidth(temp_silos_1->sizePolicy().hasHeightForWidth());
        temp_silos_1->setSizePolicy(sizePolicy2);
        temp_silos_1->setMinimumSize(QSize(262, 446));
        temp_silos_1->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"QLabel{\n"
"	color: #ffffff\n"
"}"));
        gridLayout_13 = new QGridLayout(temp_silos_1);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));

        gridLayout_15->addWidget(temp_silos_1, 0, 0, 1, 1);

        temp_silos_2 = new Temp_silos(tab_temp);
        temp_silos_2->setObjectName(QString::fromUtf8("temp_silos_2"));
        sizePolicy2.setHeightForWidth(temp_silos_2->sizePolicy().hasHeightForWidth());
        temp_silos_2->setSizePolicy(sizePolicy2);
        temp_silos_2->setMinimumSize(QSize(263, 446));
        temp_silos_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #ffffff\n"
"}"));
        gridLayout_14 = new QGridLayout(temp_silos_2);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));

        gridLayout_15->addWidget(temp_silos_2, 0, 1, 1, 1);

        temp_alarms_silos_1 = new QWidget(tab_temp);
        temp_alarms_silos_1->setObjectName(QString::fromUtf8("temp_alarms_silos_1"));
        sizePolicy1.setHeightForWidth(temp_alarms_silos_1->sizePolicy().hasHeightForWidth());
        temp_alarms_silos_1->setSizePolicy(sizePolicy1);
        temp_alarms_silos_1->setMinimumSize(QSize(50, 160));
        temp_alarms_silos_1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #ffffff\n"
"}\n"
"QPushButton{\n"
"background: #9b9a9f;\n"
"color: white;\n"
"border-top-left-radius: 5px;\n"
"    border-top-right-radius: 5px;\n"
"    border-bottom-left-radius: 5px;\n"
"    border-bottom-right-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"                         background-color: #b5b5b5;  \n"
"                     }\n"
"                         QPushButton:pressed {\n"
"                         background-color: #808080;  \n"
"                         }"));
        gridLayout_11 = new QGridLayout(temp_alarms_silos_1);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        temp_ico_temp_1 = new QLabel(temp_alarms_silos_1);
        temp_ico_temp_1->setObjectName(QString::fromUtf8("temp_ico_temp_1"));
        sizePolicy2.setHeightForWidth(temp_ico_temp_1->sizePolicy().hasHeightForWidth());
        temp_ico_temp_1->setSizePolicy(sizePolicy2);
        temp_ico_temp_1->setMinimumSize(QSize(50, 50));
        temp_ico_temp_1->setPixmap(QPixmap(QString::fromUtf8(":/ikona_warning_t\305\202o.png")));
        temp_ico_temp_1->setScaledContents(false);
        temp_ico_temp_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temp_ico_temp_1->setWordWrap(false);
        temp_ico_temp_1->setOpenExternalLinks(false);

        gridLayout_11->addWidget(temp_ico_temp_1, 3, 2, 1, 1);

        temp_info_alarms_temp_1 = new QLabel(temp_alarms_silos_1);
        temp_info_alarms_temp_1->setObjectName(QString::fromUtf8("temp_info_alarms_temp_1"));
        sizePolicy2.setHeightForWidth(temp_info_alarms_temp_1->sizePolicy().hasHeightForWidth());
        temp_info_alarms_temp_1->setSizePolicy(sizePolicy2);
        temp_info_alarms_temp_1->setMinimumSize(QSize(0, 0));
        temp_info_alarms_temp_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_11->addWidget(temp_info_alarms_temp_1, 3, 1, 1, 1);

        temp_alarms_temp_1 = new QLabel(temp_alarms_silos_1);
        temp_alarms_temp_1->setObjectName(QString::fromUtf8("temp_alarms_temp_1"));
        sizePolicy2.setHeightForWidth(temp_alarms_temp_1->sizePolicy().hasHeightForWidth());
        temp_alarms_temp_1->setSizePolicy(sizePolicy2);
        temp_alarms_temp_1->setFont(font);

        gridLayout_11->addWidget(temp_alarms_temp_1, 3, 0, 1, 1);

        temp_alarms_settings_button_silos_1 = new QPushButton(temp_alarms_silos_1);
        temp_alarms_settings_button_silos_1->setObjectName(QString::fromUtf8("temp_alarms_settings_button_silos_1"));
        temp_alarms_settings_button_silos_1->setMinimumSize(QSize(0, 50));
        temp_alarms_settings_button_silos_1->setFont(font);

        gridLayout_11->addWidget(temp_alarms_settings_button_silos_1, 4, 0, 1, 3);


        gridLayout_15->addWidget(temp_alarms_silos_1, 1, 0, 1, 1);

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

        tabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Main_window);
    } // setupUi

    void retranslateUi(QWidget *Main_window)
    {
        Main_window->setWindowTitle(QApplication::translate("Main_window", "Wizualizacja Silos\303\263w", nullptr));
        hum_alarms_al_1->setText(QApplication::translate("Main_window", "WILGOTNO\305\232\304\206", nullptr));
        volume_ico_al_1->setText(QString());
        temp_ico_al_1->setText(QString());
        volume_alarms_al_1->setText(QApplication::translate("Main_window", "OBJ\304\230TO\305\232\304\206", nullptr));
        temp_alarms_al_1->setText(QApplication::translate("Main_window", "TEMPERATURA", nullptr));
        volume_info_alarms_al_1->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        temp_info_alarms_al_1->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        hum_info_alarms_al_1->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        hum_ico_al_1->setText(QString());
        volume_info_al_2->setText(QApplication::translate("Main_window", "70%", nullptr));
        temp_ico_al_2->setText(QString());
        volume_info_alarms_al_2->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        temp_info_alarms_al_2->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        hum_alarms_al_2->setText(QApplication::translate("Main_window", "WILGOTNO\305\232\304\206", nullptr));
        hum_info_alarms_al_2->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        volume_ico_al_2->setText(QString());
        temp_alarms_al_2->setText(QApplication::translate("Main_window", "TEMPERATURA", nullptr));
        hum_ico_al_2->setText(QString());
        volume_alarms_al_2->setText(QApplication::translate("Main_window", "OBJ\304\230TO\305\232\304\206", nullptr));
        volume_info_al_1->setText(QApplication::translate("Main_window", "70%", nullptr));
        tabs->setTabText(tabs->indexOf(tab_all_param), QApplication::translate("Main_window", "Wszystkie parametry", nullptr));
        temp_alarms_temp_2->setText(QApplication::translate("Main_window", "TEMPERATURA", nullptr));
        temp_info_alarms_temp_2->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        temp_ico_temp_2->setText(QString());
        temp_alarms_settings_button_silos_2->setText(QApplication::translate("Main_window", "Ustawienia alarm\303\263w", nullptr));
        temp_ico_temp_1->setText(QString());
        temp_info_alarms_temp_1->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        temp_alarms_temp_1->setText(QApplication::translate("Main_window", "TEMPERATURA", nullptr));
        temp_alarms_settings_button_silos_1->setText(QApplication::translate("Main_window", "Ustawienia alarm\303\263w", nullptr));
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
