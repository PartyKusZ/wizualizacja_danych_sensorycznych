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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "All_param_silos.hpp"
#include "Hum_silos.hpp"
#include "QtCharts"
#include "Temp_silos.hpp"
#include "Vol_silos.hpp"

QT_BEGIN_NAMESPACE

class Ui_Main_window
{
public:
    QGridLayout *gridLayout;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QTabWidget *tabs;
    QWidget *tab_all_param;
    QGridLayout *gridLayout_2;
    All_param_silos *all_param_silos_2;
    QGridLayout *gridLayout_6;
    QLabel *volume_info_al_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *all_param_alarms_silos_1;
    QGridLayout *gridLayout_3;
    QLabel *temp_alarms_al_1;
    QLabel *temp_ico_al_1;
    QLabel *temp_info_alarms_al_1;
    QLabel *vol_alarms_al_1;
    QLabel *vol_ico_al_1;
    QLabel *vol_info_alarms_al_1;
    QLabel *hum_ico_al_1;
    QLabel *hum_alarms_al_1;
    QLabel *hum_info_alarms_al_1;
    All_param_silos *all_param_silos_1;
    QGridLayout *gridLayout_5;
    QLabel *volume_info_al_1;
    QSpacerItem *verticalSpacer;
    QWidget *all_param_alarms_silos_2;
    QGridLayout *gridLayout_4;
    QLabel *temp_alarms_al_2;
    QLabel *vol_ico_al_2;
    QLabel *temp_info_alarms_al_2;
    QLabel *vol_info_alarms_al_2;
    QLabel *temp_ico_al_2;
    QLabel *vol_alarms_al_2;
    QLabel *hum_ico_al_2;
    QLabel *hum_alarms_al_2;
    QLabel *hum_info_alarms_al_2;
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
    QLabel *temp_silos_1_second;
    QSpacerItem *verticalSpacer_4;
    QLabel *temp_silos_1_first;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    Temp_silos *temp_silos_2;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_6;
    QLabel *temp_silos_2_first;
    QSpacerItem *verticalSpacer_7;
    QLabel *temp_silos_2_second;
    QSpacerItem *verticalSpacer_8;
    QWidget *temp_alarms_silos_1;
    QGridLayout *gridLayout_11;
    QLabel *temp_alarms_temp_1;
    QLabel *temp_info_alarms_temp_1;
    QLabel *temp_ico_temp_1;
    QPushButton *temp_alarms_settings_button_silos_1;
    QWidget *tab_humidity;
    QGridLayout *gridLayout_20;
    Hum_silos *hum_silos_1;
    QGridLayout *gridLayout_19;
    QLabel *hum_silos_1_second;
    QSpacerItem *verticalSpacer_18;
    QLabel *hum_silos_1_first;
    QSpacerItem *verticalSpacer_19;
    QSpacerItem *verticalSpacer_20;
    Hum_silos *hum_silos_2;
    QGridLayout *gridLayout_18;
    QSpacerItem *verticalSpacer_15;
    QLabel *hum_silos_2_first;
    QSpacerItem *verticalSpacer_16;
    QLabel *hum_silos_2_second;
    QSpacerItem *verticalSpacer_17;
    QWidget *hum_alarms_silos_1;
    QGridLayout *gridLayout_16;
    QLabel *hum_alarms_hum_1;
    QLabel *hum_info_alarms_hum_1;
    QLabel *hum_ico_hum_1;
    QPushButton *hum_alarms_settings_button_silos_1;
    QWidget *hum_alarms_silos_2;
    QGridLayout *gridLayout_17;
    QLabel *hum_alarms_hum_2;
    QLabel *hum_info_alarms_hum_2;
    QLabel *hum_ico_hum_2;
    QPushButton *hum_alarms_settings_button_silos_2;
    QWidget *tab_volume;
    QGridLayout *gridLayout_14;
    Vol_silos *vol_silos_1;
    QGridLayout *gridLayout_10;
    QLabel *vol_info_vol_1;
    QSpacerItem *verticalSpacer_10;
    Vol_silos *vol_silos_2;
    QGridLayout *gridLayout_12;
    QLabel *vol_info_vol_2;
    QSpacerItem *verticalSpacer_11;
    QWidget *vol_alarms_silos_1;
    QGridLayout *gridLayout_22;
    QLabel *vol_alarms_vol_1;
    QLabel *vol_info_alarms_vol_1;
    QLabel *vol_ico_vol_1;
    QPushButton *vol_alarms_settings_button_silos_1;
    QWidget *vol_alarms_silos_2;
    QGridLayout *gridLayout_21;
    QLabel *vol_alarms_vol_2;
    QLabel *vol_info_alarms_vol_2;
    QLabel *vol_ico_vol_2;
    QPushButton *vol_alarms_settings_button_silos_2;
    QWidget *tab_old_data;
    QGridLayout *gridLayout_9;
    QRadioButton *radioButton_2;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QRadioButton *radioButton;
    QDateEdit *dateEdit_2;
    QComboBox *comboBox;
    QChartView *chartview;
    QLabel *label;
    QPushButton *apply_button;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *show_calendar_button_1;
    QPushButton *show_calendar_button_2;
    QLabel *label_6;
    QLabel *label_5;

    void setupUi(QWidget *Main_window)
    {
        if (Main_window->objectName().isEmpty())
            Main_window->setObjectName(QString::fromUtf8("Main_window"));
        Main_window->resize(1144, 752);
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
        radioButton_4 = new QRadioButton(Main_window);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioButton_4->sizePolicy().hasHeightForWidth());
        radioButton_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(radioButton_4, 0, 2, 1, 1);

        radioButton_3 = new QRadioButton(Main_window);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        sizePolicy1.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy1);
        radioButton_3->setChecked(true);

        gridLayout->addWidget(radioButton_3, 0, 0, 1, 1);

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
        all_param_silos_2 = new All_param_silos(tab_all_param);
        all_param_silos_2->setObjectName(QString::fromUtf8("all_param_silos_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
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
        QFont font;
        font.setPointSize(25);
        volume_info_al_2->setFont(font);
        volume_info_al_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(volume_info_al_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 425, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_6->addItem(verticalSpacer_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(all_param_silos_2, 1, 2, 1, 1);

        all_param_alarms_silos_1 = new QWidget(tab_all_param);
        all_param_alarms_silos_1->setObjectName(QString::fromUtf8("all_param_alarms_silos_1"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(all_param_alarms_silos_1->sizePolicy().hasHeightForWidth());
        all_param_alarms_silos_1->setSizePolicy(sizePolicy3);
        all_param_alarms_silos_1->setMinimumSize(QSize(50, 170));
        all_param_alarms_silos_1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color: #ffffff\n"
"}"));
        gridLayout_3 = new QGridLayout(all_param_alarms_silos_1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        temp_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        temp_alarms_al_1->setObjectName(QString::fromUtf8("temp_alarms_al_1"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(temp_alarms_al_1->sizePolicy().hasHeightForWidth());
        temp_alarms_al_1->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setPointSize(15);
        temp_alarms_al_1->setFont(font1);

        gridLayout_3->addWidget(temp_alarms_al_1, 1, 1, 1, 1);

        temp_ico_al_1 = new QLabel(all_param_alarms_silos_1);
        temp_ico_al_1->setObjectName(QString::fromUtf8("temp_ico_al_1"));
        sizePolicy4.setHeightForWidth(temp_ico_al_1->sizePolicy().hasHeightForWidth());
        temp_ico_al_1->setSizePolicy(sizePolicy4);
        temp_ico_al_1->setMinimumSize(QSize(10, 50));
        temp_ico_al_1->setPixmap(QPixmap(QString::fromUtf8(":/ikona_warning_t\305\202o.png")));
        temp_ico_al_1->setScaledContents(false);
        temp_ico_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temp_ico_al_1->setWordWrap(false);
        temp_ico_al_1->setIndent(0);
        temp_ico_al_1->setOpenExternalLinks(false);

        gridLayout_3->addWidget(temp_ico_al_1, 1, 0, 1, 1);

        temp_info_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        temp_info_alarms_al_1->setObjectName(QString::fromUtf8("temp_info_alarms_al_1"));
        sizePolicy2.setHeightForWidth(temp_info_alarms_al_1->sizePolicy().hasHeightForWidth());
        temp_info_alarms_al_1->setSizePolicy(sizePolicy2);
        temp_info_alarms_al_1->setMinimumSize(QSize(0, 0));
        temp_info_alarms_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(temp_info_alarms_al_1, 1, 2, 1, 1);

        vol_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        vol_alarms_al_1->setObjectName(QString::fromUtf8("vol_alarms_al_1"));
        sizePolicy4.setHeightForWidth(vol_alarms_al_1->sizePolicy().hasHeightForWidth());
        vol_alarms_al_1->setSizePolicy(sizePolicy4);
        vol_alarms_al_1->setMinimumSize(QSize(50, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        vol_alarms_al_1->setFont(font2);
        vol_alarms_al_1->setIndent(-1);

        gridLayout_3->addWidget(vol_alarms_al_1, 3, 1, 1, 1);

        vol_ico_al_1 = new QLabel(all_param_alarms_silos_1);
        vol_ico_al_1->setObjectName(QString::fromUtf8("vol_ico_al_1"));
        sizePolicy4.setHeightForWidth(vol_ico_al_1->sizePolicy().hasHeightForWidth());
        vol_ico_al_1->setSizePolicy(sizePolicy4);
        vol_ico_al_1->setMinimumSize(QSize(10, 50));
        QFont font3;
        font3.setKerning(true);
        vol_ico_al_1->setFont(font3);
        vol_ico_al_1->setStyleSheet(QString::fromUtf8(""));
        vol_ico_al_1->setTextFormat(Qt::AutoText);
        vol_ico_al_1->setPixmap(QPixmap(QString::fromUtf8(":/ikona_stop_t\305\202o.png")));
        vol_ico_al_1->setScaledContents(false);
        vol_ico_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vol_ico_al_1->setWordWrap(false);
        vol_ico_al_1->setMargin(0);
        vol_ico_al_1->setIndent(0);
        vol_ico_al_1->setOpenExternalLinks(false);

        gridLayout_3->addWidget(vol_ico_al_1, 3, 0, 1, 1);

        vol_info_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        vol_info_alarms_al_1->setObjectName(QString::fromUtf8("vol_info_alarms_al_1"));
        sizePolicy2.setHeightForWidth(vol_info_alarms_al_1->sizePolicy().hasHeightForWidth());
        vol_info_alarms_al_1->setSizePolicy(sizePolicy2);
        vol_info_alarms_al_1->setMinimumSize(QSize(50, 50));
        vol_info_alarms_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(vol_info_alarms_al_1, 3, 2, 1, 1);

        hum_ico_al_1 = new QLabel(all_param_alarms_silos_1);
        hum_ico_al_1->setObjectName(QString::fromUtf8("hum_ico_al_1"));
        sizePolicy2.setHeightForWidth(hum_ico_al_1->sizePolicy().hasHeightForWidth());
        hum_ico_al_1->setSizePolicy(sizePolicy2);
        hum_ico_al_1->setMinimumSize(QSize(10, 50));
        hum_ico_al_1->setBaseSize(QSize(0, 0));
        hum_ico_al_1->setPixmap(QPixmap(QString::fromUtf8(":/ikona_warning.png")));
        hum_ico_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        hum_ico_al_1->setMargin(0);
        hum_ico_al_1->setIndent(0);

        gridLayout_3->addWidget(hum_ico_al_1, 2, 0, 1, 1);

        hum_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        hum_alarms_al_1->setObjectName(QString::fromUtf8("hum_alarms_al_1"));
        sizePolicy4.setHeightForWidth(hum_alarms_al_1->sizePolicy().hasHeightForWidth());
        hum_alarms_al_1->setSizePolicy(sizePolicy4);
        hum_alarms_al_1->setFont(font1);

        gridLayout_3->addWidget(hum_alarms_al_1, 2, 1, 1, 1);

        hum_info_alarms_al_1 = new QLabel(all_param_alarms_silos_1);
        hum_info_alarms_al_1->setObjectName(QString::fromUtf8("hum_info_alarms_al_1"));
        sizePolicy2.setHeightForWidth(hum_info_alarms_al_1->sizePolicy().hasHeightForWidth());
        hum_info_alarms_al_1->setSizePolicy(sizePolicy2);
        hum_info_alarms_al_1->setMinimumSize(QSize(0, 0));
        hum_info_alarms_al_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(hum_info_alarms_al_1, 2, 2, 1, 1);


        gridLayout_2->addWidget(all_param_alarms_silos_1, 2, 0, 1, 1);

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
        volume_info_al_1->setFont(font);
        volume_info_al_1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(volume_info_al_1, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 361, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_2->addWidget(all_param_silos_1, 1, 0, 1, 1);

        all_param_alarms_silos_2 = new QWidget(tab_all_param);
        all_param_alarms_silos_2->setObjectName(QString::fromUtf8("all_param_alarms_silos_2"));
        sizePolicy3.setHeightForWidth(all_param_alarms_silos_2->sizePolicy().hasHeightForWidth());
        all_param_alarms_silos_2->setSizePolicy(sizePolicy3);
        all_param_alarms_silos_2->setMinimumSize(QSize(50, 170));
        all_param_alarms_silos_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgba(0, 0, 0, 0);\n"
"	color: #ffffff;\n"
"}"));
        gridLayout_4 = new QGridLayout(all_param_alarms_silos_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        temp_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        temp_alarms_al_2->setObjectName(QString::fromUtf8("temp_alarms_al_2"));
        sizePolicy4.setHeightForWidth(temp_alarms_al_2->sizePolicy().hasHeightForWidth());
        temp_alarms_al_2->setSizePolicy(sizePolicy4);
        temp_alarms_al_2->setMinimumSize(QSize(50, 50));
        temp_alarms_al_2->setFont(font1);

        gridLayout_4->addWidget(temp_alarms_al_2, 0, 1, 1, 1);

        vol_ico_al_2 = new QLabel(all_param_alarms_silos_2);
        vol_ico_al_2->setObjectName(QString::fromUtf8("vol_ico_al_2"));
        sizePolicy4.setHeightForWidth(vol_ico_al_2->sizePolicy().hasHeightForWidth());
        vol_ico_al_2->setSizePolicy(sizePolicy4);
        vol_ico_al_2->setMinimumSize(QSize(10, 50));
        vol_ico_al_2->setFont(font3);
        vol_ico_al_2->setStyleSheet(QString::fromUtf8(""));
        vol_ico_al_2->setTextFormat(Qt::AutoText);
        vol_ico_al_2->setPixmap(QPixmap(QString::fromUtf8(":/ok.png")));
        vol_ico_al_2->setScaledContents(false);
        vol_ico_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vol_ico_al_2->setOpenExternalLinks(false);

        gridLayout_4->addWidget(vol_ico_al_2, 2, 0, 1, 1);

        temp_info_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        temp_info_alarms_al_2->setObjectName(QString::fromUtf8("temp_info_alarms_al_2"));
        sizePolicy2.setHeightForWidth(temp_info_alarms_al_2->sizePolicy().hasHeightForWidth());
        temp_info_alarms_al_2->setSizePolicy(sizePolicy2);
        temp_info_alarms_al_2->setMinimumSize(QSize(0, 0));
        temp_info_alarms_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(temp_info_alarms_al_2, 0, 2, 1, 1);

        vol_info_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        vol_info_alarms_al_2->setObjectName(QString::fromUtf8("vol_info_alarms_al_2"));
        sizePolicy2.setHeightForWidth(vol_info_alarms_al_2->sizePolicy().hasHeightForWidth());
        vol_info_alarms_al_2->setSizePolicy(sizePolicy2);
        vol_info_alarms_al_2->setMinimumSize(QSize(50, 50));
        vol_info_alarms_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(vol_info_alarms_al_2, 2, 2, 1, 1);

        temp_ico_al_2 = new QLabel(all_param_alarms_silos_2);
        temp_ico_al_2->setObjectName(QString::fromUtf8("temp_ico_al_2"));
        sizePolicy4.setHeightForWidth(temp_ico_al_2->sizePolicy().hasHeightForWidth());
        temp_ico_al_2->setSizePolicy(sizePolicy4);
        temp_ico_al_2->setMinimumSize(QSize(10, 50));
        temp_ico_al_2->setPixmap(QPixmap(QString::fromUtf8(":/ikona_stop_t\305\202o.png")));
        temp_ico_al_2->setScaledContents(false);
        temp_ico_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temp_ico_al_2->setWordWrap(false);
        temp_ico_al_2->setOpenExternalLinks(false);

        gridLayout_4->addWidget(temp_ico_al_2, 0, 0, 1, 1);

        vol_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        vol_alarms_al_2->setObjectName(QString::fromUtf8("vol_alarms_al_2"));
        sizePolicy4.setHeightForWidth(vol_alarms_al_2->sizePolicy().hasHeightForWidth());
        vol_alarms_al_2->setSizePolicy(sizePolicy4);
        vol_alarms_al_2->setMinimumSize(QSize(50, 50));
        vol_alarms_al_2->setFont(font2);

        gridLayout_4->addWidget(vol_alarms_al_2, 2, 1, 1, 1);

        hum_ico_al_2 = new QLabel(all_param_alarms_silos_2);
        hum_ico_al_2->setObjectName(QString::fromUtf8("hum_ico_al_2"));
        sizePolicy4.setHeightForWidth(hum_ico_al_2->sizePolicy().hasHeightForWidth());
        hum_ico_al_2->setSizePolicy(sizePolicy4);
        hum_ico_al_2->setMinimumSize(QSize(10, 50));
        hum_ico_al_2->setPixmap(QPixmap(QString::fromUtf8(":/ikona_warning.png")));
        hum_ico_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(hum_ico_al_2, 1, 0, 1, 1);

        hum_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        hum_alarms_al_2->setObjectName(QString::fromUtf8("hum_alarms_al_2"));
        sizePolicy4.setHeightForWidth(hum_alarms_al_2->sizePolicy().hasHeightForWidth());
        hum_alarms_al_2->setSizePolicy(sizePolicy4);
        hum_alarms_al_2->setFont(font1);

        gridLayout_4->addWidget(hum_alarms_al_2, 1, 1, 1, 1);

        hum_info_alarms_al_2 = new QLabel(all_param_alarms_silos_2);
        hum_info_alarms_al_2->setObjectName(QString::fromUtf8("hum_info_alarms_al_2"));
        sizePolicy2.setHeightForWidth(hum_info_alarms_al_2->sizePolicy().hasHeightForWidth());
        hum_info_alarms_al_2->setSizePolicy(sizePolicy2);
        hum_info_alarms_al_2->setMinimumSize(QSize(0, 0));
        hum_info_alarms_al_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(hum_info_alarms_al_2, 1, 2, 1, 1);


        gridLayout_2->addWidget(all_param_alarms_silos_2, 2, 2, 1, 1);

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
        sizePolicy3.setHeightForWidth(temp_alarms_silos_2->sizePolicy().hasHeightForWidth());
        temp_alarms_silos_2->setSizePolicy(sizePolicy3);
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
        sizePolicy4.setHeightForWidth(temp_alarms_temp_2->sizePolicy().hasHeightForWidth());
        temp_alarms_temp_2->setSizePolicy(sizePolicy4);
        temp_alarms_temp_2->setMinimumSize(QSize(50, 50));
        temp_alarms_temp_2->setFont(font1);

        gridLayout_7->addWidget(temp_alarms_temp_2, 0, 1, 1, 1);

        temp_info_alarms_temp_2 = new QLabel(temp_alarms_silos_2);
        temp_info_alarms_temp_2->setObjectName(QString::fromUtf8("temp_info_alarms_temp_2"));
        sizePolicy2.setHeightForWidth(temp_info_alarms_temp_2->sizePolicy().hasHeightForWidth());
        temp_info_alarms_temp_2->setSizePolicy(sizePolicy2);
        temp_info_alarms_temp_2->setMinimumSize(QSize(0, 0));
        temp_info_alarms_temp_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(temp_info_alarms_temp_2, 0, 2, 1, 1);

        temp_ico_temp_2 = new QLabel(temp_alarms_silos_2);
        temp_ico_temp_2->setObjectName(QString::fromUtf8("temp_ico_temp_2"));
        sizePolicy4.setHeightForWidth(temp_ico_temp_2->sizePolicy().hasHeightForWidth());
        temp_ico_temp_2->setSizePolicy(sizePolicy4);
        temp_ico_temp_2->setMinimumSize(QSize(10, 50));
        temp_ico_temp_2->setPixmap(QPixmap(QString::fromUtf8(":/ikona_stop_t\305\202o.png")));
        temp_ico_temp_2->setScaledContents(false);
        temp_ico_temp_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temp_ico_temp_2->setWordWrap(false);
        temp_ico_temp_2->setOpenExternalLinks(false);

        gridLayout_7->addWidget(temp_ico_temp_2, 0, 0, 1, 1);

        temp_alarms_settings_button_silos_2 = new QPushButton(temp_alarms_silos_2);
        temp_alarms_settings_button_silos_2->setObjectName(QString::fromUtf8("temp_alarms_settings_button_silos_2"));
        temp_alarms_settings_button_silos_2->setMinimumSize(QSize(0, 50));
        temp_alarms_settings_button_silos_2->setFont(font1);

        gridLayout_7->addWidget(temp_alarms_settings_button_silos_2, 1, 0, 1, 4);


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
"	color: #ffffff;\n"
"	 background-color: rgba(0, 0, 0, 0); \n"
"}"));
        gridLayout_13 = new QGridLayout(temp_silos_1);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        temp_silos_1_second = new QLabel(temp_silos_1);
        temp_silos_1_second->setObjectName(QString::fromUtf8("temp_silos_1_second"));
        QFont font4;
        font4.setPointSize(23);
        temp_silos_1_second->setFont(font4);
        temp_silos_1_second->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(temp_silos_1_second, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_4, 4, 0, 1, 1);

        temp_silos_1_first = new QLabel(temp_silos_1);
        temp_silos_1_first->setObjectName(QString::fromUtf8("temp_silos_1_first"));
        temp_silos_1_first->setFont(font4);
        temp_silos_1_first->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(temp_silos_1_first, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_3, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_5, 2, 0, 1, 1);


        gridLayout_15->addWidget(temp_silos_1, 0, 0, 1, 1);

        temp_silos_2 = new Temp_silos(tab_temp);
        temp_silos_2->setObjectName(QString::fromUtf8("temp_silos_2"));
        sizePolicy2.setHeightForWidth(temp_silos_2->sizePolicy().hasHeightForWidth());
        temp_silos_2->setSizePolicy(sizePolicy2);
        temp_silos_2->setMinimumSize(QSize(263, 446));
        temp_silos_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #ffffff;\n"
"	 background-color: rgba(0, 0, 0, 0); \n"
"}"));
        gridLayout_8 = new QGridLayout(temp_silos_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalSpacer_6 = new QSpacerItem(20, 96, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 0, 0, 1, 1);

        temp_silos_2_first = new QLabel(temp_silos_2);
        temp_silos_2_first->setObjectName(QString::fromUtf8("temp_silos_2_first"));
        temp_silos_2_first->setFont(font4);
        temp_silos_2_first->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(temp_silos_2_first, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 95, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_7, 2, 0, 1, 1);

        temp_silos_2_second = new QLabel(temp_silos_2);
        temp_silos_2_second->setObjectName(QString::fromUtf8("temp_silos_2_second"));
        temp_silos_2_second->setFont(font4);
        temp_silos_2_second->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(temp_silos_2_second, 3, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 96, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_8, 4, 0, 1, 1);


        gridLayout_15->addWidget(temp_silos_2, 0, 1, 1, 1);

        temp_alarms_silos_1 = new QWidget(tab_temp);
        temp_alarms_silos_1->setObjectName(QString::fromUtf8("temp_alarms_silos_1"));
        sizePolicy3.setHeightForWidth(temp_alarms_silos_1->sizePolicy().hasHeightForWidth());
        temp_alarms_silos_1->setSizePolicy(sizePolicy3);
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
        temp_alarms_temp_1 = new QLabel(temp_alarms_silos_1);
        temp_alarms_temp_1->setObjectName(QString::fromUtf8("temp_alarms_temp_1"));
        sizePolicy4.setHeightForWidth(temp_alarms_temp_1->sizePolicy().hasHeightForWidth());
        temp_alarms_temp_1->setSizePolicy(sizePolicy4);
        temp_alarms_temp_1->setMinimumSize(QSize(50, 50));
        temp_alarms_temp_1->setFont(font1);

        gridLayout_11->addWidget(temp_alarms_temp_1, 3, 1, 1, 1);

        temp_info_alarms_temp_1 = new QLabel(temp_alarms_silos_1);
        temp_info_alarms_temp_1->setObjectName(QString::fromUtf8("temp_info_alarms_temp_1"));
        sizePolicy2.setHeightForWidth(temp_info_alarms_temp_1->sizePolicy().hasHeightForWidth());
        temp_info_alarms_temp_1->setSizePolicy(sizePolicy2);
        temp_info_alarms_temp_1->setMinimumSize(QSize(0, 0));
        temp_info_alarms_temp_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_11->addWidget(temp_info_alarms_temp_1, 3, 2, 1, 1);

        temp_ico_temp_1 = new QLabel(temp_alarms_silos_1);
        temp_ico_temp_1->setObjectName(QString::fromUtf8("temp_ico_temp_1"));
        sizePolicy4.setHeightForWidth(temp_ico_temp_1->sizePolicy().hasHeightForWidth());
        temp_ico_temp_1->setSizePolicy(sizePolicy4);
        temp_ico_temp_1->setMinimumSize(QSize(10, 50));
        temp_ico_temp_1->setPixmap(QPixmap(QString::fromUtf8(":/ikona_warning_t\305\202o.png")));
        temp_ico_temp_1->setScaledContents(false);
        temp_ico_temp_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temp_ico_temp_1->setWordWrap(false);
        temp_ico_temp_1->setOpenExternalLinks(false);

        gridLayout_11->addWidget(temp_ico_temp_1, 3, 0, 1, 1);

        temp_alarms_settings_button_silos_1 = new QPushButton(temp_alarms_silos_1);
        temp_alarms_settings_button_silos_1->setObjectName(QString::fromUtf8("temp_alarms_settings_button_silos_1"));
        temp_alarms_settings_button_silos_1->setMinimumSize(QSize(0, 50));
        temp_alarms_settings_button_silos_1->setFont(font1);

        gridLayout_11->addWidget(temp_alarms_settings_button_silos_1, 4, 0, 1, 4);


        gridLayout_15->addWidget(temp_alarms_silos_1, 1, 0, 1, 1);

        tabs->addTab(tab_temp, QString());
        tab_humidity = new QWidget();
        tab_humidity->setObjectName(QString::fromUtf8("tab_humidity"));
        tab_humidity->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #26292e;\n"
"	border-radius: 20px;\n"
"margin: 10px;\n"
"}\n"
"\n"
"\n"
"#tab_humidity{\n"
"	background: #010101;\n"
"}"));
        gridLayout_20 = new QGridLayout(tab_humidity);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        hum_silos_1 = new Hum_silos(tab_humidity);
        hum_silos_1->setObjectName(QString::fromUtf8("hum_silos_1"));
        sizePolicy2.setHeightForWidth(hum_silos_1->sizePolicy().hasHeightForWidth());
        hum_silos_1->setSizePolicy(sizePolicy2);
        hum_silos_1->setMinimumSize(QSize(262, 446));
        hum_silos_1->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"QLabel{\n"
"	color: #ffffff;\n"
"	 background-color: rgba(0, 0, 0, 0); \n"
"}"));
        gridLayout_19 = new QGridLayout(hum_silos_1);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        hum_silos_1_second = new QLabel(hum_silos_1);
        hum_silos_1_second->setObjectName(QString::fromUtf8("hum_silos_1_second"));
        hum_silos_1_second->setFont(font4);
        hum_silos_1_second->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(hum_silos_1_second, 3, 0, 1, 1);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_19->addItem(verticalSpacer_18, 4, 0, 1, 1);

        hum_silos_1_first = new QLabel(hum_silos_1);
        hum_silos_1_first->setObjectName(QString::fromUtf8("hum_silos_1_first"));
        hum_silos_1_first->setFont(font4);
        hum_silos_1_first->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(hum_silos_1_first, 1, 0, 1, 1);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_19->addItem(verticalSpacer_19, 0, 0, 1, 1);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_19->addItem(verticalSpacer_20, 2, 0, 1, 1);


        gridLayout_20->addWidget(hum_silos_1, 0, 0, 1, 1);

        hum_silos_2 = new Hum_silos(tab_humidity);
        hum_silos_2->setObjectName(QString::fromUtf8("hum_silos_2"));
        sizePolicy2.setHeightForWidth(hum_silos_2->sizePolicy().hasHeightForWidth());
        hum_silos_2->setSizePolicy(sizePolicy2);
        hum_silos_2->setMinimumSize(QSize(263, 446));
        hum_silos_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #ffffff;\n"
"	 background-color: rgba(0, 0, 0, 0); \n"
"}"));
        gridLayout_18 = new QGridLayout(hum_silos_2);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        verticalSpacer_15 = new QSpacerItem(20, 96, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_18->addItem(verticalSpacer_15, 0, 0, 1, 1);

        hum_silos_2_first = new QLabel(hum_silos_2);
        hum_silos_2_first->setObjectName(QString::fromUtf8("hum_silos_2_first"));
        hum_silos_2_first->setFont(font4);
        hum_silos_2_first->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(hum_silos_2_first, 1, 0, 1, 1);

        verticalSpacer_16 = new QSpacerItem(20, 95, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_18->addItem(verticalSpacer_16, 2, 0, 1, 1);

        hum_silos_2_second = new QLabel(hum_silos_2);
        hum_silos_2_second->setObjectName(QString::fromUtf8("hum_silos_2_second"));
        hum_silos_2_second->setFont(font4);
        hum_silos_2_second->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(hum_silos_2_second, 3, 0, 1, 1);

        verticalSpacer_17 = new QSpacerItem(20, 96, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_18->addItem(verticalSpacer_17, 4, 0, 1, 1);


        gridLayout_20->addWidget(hum_silos_2, 0, 1, 1, 1);

        hum_alarms_silos_1 = new QWidget(tab_humidity);
        hum_alarms_silos_1->setObjectName(QString::fromUtf8("hum_alarms_silos_1"));
        sizePolicy3.setHeightForWidth(hum_alarms_silos_1->sizePolicy().hasHeightForWidth());
        hum_alarms_silos_1->setSizePolicy(sizePolicy3);
        hum_alarms_silos_1->setMinimumSize(QSize(50, 160));
        hum_alarms_silos_1->setStyleSheet(QString::fromUtf8("QLabel{\n"
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
        gridLayout_16 = new QGridLayout(hum_alarms_silos_1);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        hum_alarms_hum_1 = new QLabel(hum_alarms_silos_1);
        hum_alarms_hum_1->setObjectName(QString::fromUtf8("hum_alarms_hum_1"));
        sizePolicy4.setHeightForWidth(hum_alarms_hum_1->sizePolicy().hasHeightForWidth());
        hum_alarms_hum_1->setSizePolicy(sizePolicy4);
        hum_alarms_hum_1->setMinimumSize(QSize(50, 50));
        hum_alarms_hum_1->setFont(font1);

        gridLayout_16->addWidget(hum_alarms_hum_1, 3, 1, 1, 1);

        hum_info_alarms_hum_1 = new QLabel(hum_alarms_silos_1);
        hum_info_alarms_hum_1->setObjectName(QString::fromUtf8("hum_info_alarms_hum_1"));
        sizePolicy2.setHeightForWidth(hum_info_alarms_hum_1->sizePolicy().hasHeightForWidth());
        hum_info_alarms_hum_1->setSizePolicy(sizePolicy2);
        hum_info_alarms_hum_1->setMinimumSize(QSize(0, 0));
        hum_info_alarms_hum_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_16->addWidget(hum_info_alarms_hum_1, 3, 2, 1, 1);

        hum_ico_hum_1 = new QLabel(hum_alarms_silos_1);
        hum_ico_hum_1->setObjectName(QString::fromUtf8("hum_ico_hum_1"));
        sizePolicy4.setHeightForWidth(hum_ico_hum_1->sizePolicy().hasHeightForWidth());
        hum_ico_hum_1->setSizePolicy(sizePolicy4);
        hum_ico_hum_1->setMinimumSize(QSize(10, 50));
        hum_ico_hum_1->setPixmap(QPixmap(QString::fromUtf8(":/ikona_warning_t\305\202o.png")));
        hum_ico_hum_1->setScaledContents(false);
        hum_ico_hum_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        hum_ico_hum_1->setWordWrap(false);
        hum_ico_hum_1->setOpenExternalLinks(false);

        gridLayout_16->addWidget(hum_ico_hum_1, 3, 0, 1, 1);

        hum_alarms_settings_button_silos_1 = new QPushButton(hum_alarms_silos_1);
        hum_alarms_settings_button_silos_1->setObjectName(QString::fromUtf8("hum_alarms_settings_button_silos_1"));
        hum_alarms_settings_button_silos_1->setMinimumSize(QSize(0, 50));
        hum_alarms_settings_button_silos_1->setFont(font1);

        gridLayout_16->addWidget(hum_alarms_settings_button_silos_1, 4, 0, 1, 4);


        gridLayout_20->addWidget(hum_alarms_silos_1, 1, 0, 1, 1);

        hum_alarms_silos_2 = new QWidget(tab_humidity);
        hum_alarms_silos_2->setObjectName(QString::fromUtf8("hum_alarms_silos_2"));
        sizePolicy3.setHeightForWidth(hum_alarms_silos_2->sizePolicy().hasHeightForWidth());
        hum_alarms_silos_2->setSizePolicy(sizePolicy3);
        hum_alarms_silos_2->setMinimumSize(QSize(50, 160));
        hum_alarms_silos_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
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
        gridLayout_17 = new QGridLayout(hum_alarms_silos_2);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        hum_alarms_hum_2 = new QLabel(hum_alarms_silos_2);
        hum_alarms_hum_2->setObjectName(QString::fromUtf8("hum_alarms_hum_2"));
        sizePolicy4.setHeightForWidth(hum_alarms_hum_2->sizePolicy().hasHeightForWidth());
        hum_alarms_hum_2->setSizePolicy(sizePolicy4);
        hum_alarms_hum_2->setMinimumSize(QSize(50, 50));
        hum_alarms_hum_2->setFont(font1);

        gridLayout_17->addWidget(hum_alarms_hum_2, 0, 1, 1, 1);

        hum_info_alarms_hum_2 = new QLabel(hum_alarms_silos_2);
        hum_info_alarms_hum_2->setObjectName(QString::fromUtf8("hum_info_alarms_hum_2"));
        sizePolicy2.setHeightForWidth(hum_info_alarms_hum_2->sizePolicy().hasHeightForWidth());
        hum_info_alarms_hum_2->setSizePolicy(sizePolicy2);
        hum_info_alarms_hum_2->setMinimumSize(QSize(0, 0));
        hum_info_alarms_hum_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_17->addWidget(hum_info_alarms_hum_2, 0, 2, 1, 1);

        hum_ico_hum_2 = new QLabel(hum_alarms_silos_2);
        hum_ico_hum_2->setObjectName(QString::fromUtf8("hum_ico_hum_2"));
        sizePolicy4.setHeightForWidth(hum_ico_hum_2->sizePolicy().hasHeightForWidth());
        hum_ico_hum_2->setSizePolicy(sizePolicy4);
        hum_ico_hum_2->setMinimumSize(QSize(10, 50));
        hum_ico_hum_2->setPixmap(QPixmap(QString::fromUtf8(":/ikona_stop_t\305\202o.png")));
        hum_ico_hum_2->setScaledContents(false);
        hum_ico_hum_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        hum_ico_hum_2->setWordWrap(false);
        hum_ico_hum_2->setOpenExternalLinks(false);

        gridLayout_17->addWidget(hum_ico_hum_2, 0, 0, 1, 1);

        hum_alarms_settings_button_silos_2 = new QPushButton(hum_alarms_silos_2);
        hum_alarms_settings_button_silos_2->setObjectName(QString::fromUtf8("hum_alarms_settings_button_silos_2"));
        hum_alarms_settings_button_silos_2->setMinimumSize(QSize(0, 50));
        hum_alarms_settings_button_silos_2->setFont(font1);

        gridLayout_17->addWidget(hum_alarms_settings_button_silos_2, 1, 0, 1, 4);


        gridLayout_20->addWidget(hum_alarms_silos_2, 1, 1, 1, 1);

        tabs->addTab(tab_humidity, QString());
        tab_volume = new QWidget();
        tab_volume->setObjectName(QString::fromUtf8("tab_volume"));
        tab_volume->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #26292e;\n"
"	border-radius: 20px;\n"
"margin: 10px;\n"
"}\n"
"\n"
"\n"
"#tab_volume{\n"
"	background: #010101;\n"
"}"));
        gridLayout_14 = new QGridLayout(tab_volume);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        vol_silos_1 = new Vol_silos(tab_volume);
        vol_silos_1->setObjectName(QString::fromUtf8("vol_silos_1"));
        sizePolicy2.setHeightForWidth(vol_silos_1->sizePolicy().hasHeightForWidth());
        vol_silos_1->setSizePolicy(sizePolicy2);
        vol_silos_1->setMinimumSize(QSize(262, 446));
        vol_silos_1->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"QLabel{\n"
"	color: #ffffff\n"
"}"));
        gridLayout_10 = new QGridLayout(vol_silos_1);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        vol_info_vol_1 = new QLabel(vol_silos_1);
        vol_info_vol_1->setObjectName(QString::fromUtf8("vol_info_vol_1"));
        vol_info_vol_1->setFont(font);
        vol_info_vol_1->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(vol_info_vol_1, 3, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 361, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_10, 1, 0, 1, 1);


        gridLayout_14->addWidget(vol_silos_1, 0, 0, 1, 1);

        vol_silos_2 = new Vol_silos(tab_volume);
        vol_silos_2->setObjectName(QString::fromUtf8("vol_silos_2"));
        sizePolicy2.setHeightForWidth(vol_silos_2->sizePolicy().hasHeightForWidth());
        vol_silos_2->setSizePolicy(sizePolicy2);
        vol_silos_2->setMinimumSize(QSize(263, 446));
        vol_silos_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #ffffff\n"
"}"));
        gridLayout_12 = new QGridLayout(vol_silos_2);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        vol_info_vol_2 = new QLabel(vol_silos_2);
        vol_info_vol_2->setObjectName(QString::fromUtf8("vol_info_vol_2"));
        vol_info_vol_2->setFont(font);
        vol_info_vol_2->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(vol_info_vol_2, 1, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 425, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_12->addItem(verticalSpacer_11, 0, 0, 1, 1);


        gridLayout_14->addWidget(vol_silos_2, 0, 1, 1, 1);

        vol_alarms_silos_1 = new QWidget(tab_volume);
        vol_alarms_silos_1->setObjectName(QString::fromUtf8("vol_alarms_silos_1"));
        sizePolicy3.setHeightForWidth(vol_alarms_silos_1->sizePolicy().hasHeightForWidth());
        vol_alarms_silos_1->setSizePolicy(sizePolicy3);
        vol_alarms_silos_1->setMinimumSize(QSize(50, 160));
        vol_alarms_silos_1->setStyleSheet(QString::fromUtf8("QLabel{\n"
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
        gridLayout_22 = new QGridLayout(vol_alarms_silos_1);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        vol_alarms_vol_1 = new QLabel(vol_alarms_silos_1);
        vol_alarms_vol_1->setObjectName(QString::fromUtf8("vol_alarms_vol_1"));
        sizePolicy4.setHeightForWidth(vol_alarms_vol_1->sizePolicy().hasHeightForWidth());
        vol_alarms_vol_1->setSizePolicy(sizePolicy4);
        vol_alarms_vol_1->setMinimumSize(QSize(50, 50));
        vol_alarms_vol_1->setFont(font1);

        gridLayout_22->addWidget(vol_alarms_vol_1, 3, 1, 1, 1);

        vol_info_alarms_vol_1 = new QLabel(vol_alarms_silos_1);
        vol_info_alarms_vol_1->setObjectName(QString::fromUtf8("vol_info_alarms_vol_1"));
        sizePolicy2.setHeightForWidth(vol_info_alarms_vol_1->sizePolicy().hasHeightForWidth());
        vol_info_alarms_vol_1->setSizePolicy(sizePolicy2);
        vol_info_alarms_vol_1->setMinimumSize(QSize(0, 0));
        vol_info_alarms_vol_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_22->addWidget(vol_info_alarms_vol_1, 3, 2, 1, 1);

        vol_ico_vol_1 = new QLabel(vol_alarms_silos_1);
        vol_ico_vol_1->setObjectName(QString::fromUtf8("vol_ico_vol_1"));
        sizePolicy4.setHeightForWidth(vol_ico_vol_1->sizePolicy().hasHeightForWidth());
        vol_ico_vol_1->setSizePolicy(sizePolicy4);
        vol_ico_vol_1->setMinimumSize(QSize(10, 50));
        vol_ico_vol_1->setPixmap(QPixmap(QString::fromUtf8(":/ikona_warning_t\305\202o.png")));
        vol_ico_vol_1->setScaledContents(false);
        vol_ico_vol_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vol_ico_vol_1->setWordWrap(false);
        vol_ico_vol_1->setOpenExternalLinks(false);

        gridLayout_22->addWidget(vol_ico_vol_1, 3, 0, 1, 1);

        vol_alarms_settings_button_silos_1 = new QPushButton(vol_alarms_silos_1);
        vol_alarms_settings_button_silos_1->setObjectName(QString::fromUtf8("vol_alarms_settings_button_silos_1"));
        vol_alarms_settings_button_silos_1->setMinimumSize(QSize(0, 50));
        vol_alarms_settings_button_silos_1->setFont(font1);

        gridLayout_22->addWidget(vol_alarms_settings_button_silos_1, 4, 0, 1, 4);


        gridLayout_14->addWidget(vol_alarms_silos_1, 1, 0, 1, 1);

        vol_alarms_silos_2 = new QWidget(tab_volume);
        vol_alarms_silos_2->setObjectName(QString::fromUtf8("vol_alarms_silos_2"));
        sizePolicy3.setHeightForWidth(vol_alarms_silos_2->sizePolicy().hasHeightForWidth());
        vol_alarms_silos_2->setSizePolicy(sizePolicy3);
        vol_alarms_silos_2->setMinimumSize(QSize(50, 160));
        vol_alarms_silos_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
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
        gridLayout_21 = new QGridLayout(vol_alarms_silos_2);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        vol_alarms_vol_2 = new QLabel(vol_alarms_silos_2);
        vol_alarms_vol_2->setObjectName(QString::fromUtf8("vol_alarms_vol_2"));
        sizePolicy4.setHeightForWidth(vol_alarms_vol_2->sizePolicy().hasHeightForWidth());
        vol_alarms_vol_2->setSizePolicy(sizePolicy4);
        vol_alarms_vol_2->setMinimumSize(QSize(50, 50));
        vol_alarms_vol_2->setFont(font1);

        gridLayout_21->addWidget(vol_alarms_vol_2, 0, 1, 1, 1);

        vol_info_alarms_vol_2 = new QLabel(vol_alarms_silos_2);
        vol_info_alarms_vol_2->setObjectName(QString::fromUtf8("vol_info_alarms_vol_2"));
        sizePolicy2.setHeightForWidth(vol_info_alarms_vol_2->sizePolicy().hasHeightForWidth());
        vol_info_alarms_vol_2->setSizePolicy(sizePolicy2);
        vol_info_alarms_vol_2->setMinimumSize(QSize(0, 0));
        vol_info_alarms_vol_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_21->addWidget(vol_info_alarms_vol_2, 0, 2, 1, 1);

        vol_ico_vol_2 = new QLabel(vol_alarms_silos_2);
        vol_ico_vol_2->setObjectName(QString::fromUtf8("vol_ico_vol_2"));
        sizePolicy4.setHeightForWidth(vol_ico_vol_2->sizePolicy().hasHeightForWidth());
        vol_ico_vol_2->setSizePolicy(sizePolicy4);
        vol_ico_vol_2->setMinimumSize(QSize(10, 50));
        vol_ico_vol_2->setPixmap(QPixmap(QString::fromUtf8(":/ikona_stop_t\305\202o.png")));
        vol_ico_vol_2->setScaledContents(false);
        vol_ico_vol_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vol_ico_vol_2->setWordWrap(false);
        vol_ico_vol_2->setOpenExternalLinks(false);

        gridLayout_21->addWidget(vol_ico_vol_2, 0, 0, 1, 1);

        vol_alarms_settings_button_silos_2 = new QPushButton(vol_alarms_silos_2);
        vol_alarms_settings_button_silos_2->setObjectName(QString::fromUtf8("vol_alarms_settings_button_silos_2"));
        vol_alarms_settings_button_silos_2->setMinimumSize(QSize(0, 50));
        vol_alarms_settings_button_silos_2->setFont(font1);

        gridLayout_21->addWidget(vol_alarms_settings_button_silos_2, 1, 0, 1, 4);


        gridLayout_14->addWidget(vol_alarms_silos_2, 1, 1, 1, 1);

        tabs->addTab(tab_volume, QString());
        tab_old_data = new QWidget();
        tab_old_data->setObjectName(QString::fromUtf8("tab_old_data"));
        tab_old_data->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QRadioButton{\n"
"	color: #ffffff;\n"
"	\n"
"}\n"
"\n"
"\n"
" \n"
"QLabel{\n"
"	color: #ffffff\n"
"}"));
        gridLayout_9 = new QGridLayout(tab_old_data);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        radioButton_2 = new QRadioButton(tab_old_data);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        sizePolicy1.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(radioButton_2, 1, 2, 1, 1);

        label_3 = new QLabel(tab_old_data);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_9->addWidget(label_3, 0, 3, 1, 1);

        dateEdit = new QDateEdit(tab_old_data);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout_9->addWidget(dateEdit, 1, 4, 1, 1);

        radioButton = new QRadioButton(tab_old_data);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        sizePolicy1.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy1);
        radioButton->setChecked(true);

        gridLayout_9->addWidget(radioButton, 1, 1, 1, 1);

        dateEdit_2 = new QDateEdit(tab_old_data);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        gridLayout_9->addWidget(dateEdit_2, 1, 5, 1, 1);

        comboBox = new QComboBox(tab_old_data);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_9->addWidget(comboBox, 1, 3, 1, 1);

        chartview = new QChartView(tab_old_data);
        chartview->setObjectName(QString::fromUtf8("chartview"));

        gridLayout_9->addWidget(chartview, 3, 1, 1, 7);

        label = new QLabel(tab_old_data);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_9->addWidget(label, 0, 4, 1, 1);

        apply_button = new QPushButton(tab_old_data);
        apply_button->setObjectName(QString::fromUtf8("apply_button"));

        gridLayout_9->addWidget(apply_button, 1, 7, 1, 1);

        label_2 = new QLabel(tab_old_data);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_9->addWidget(label_2, 0, 1, 1, 1);

        label_4 = new QLabel(tab_old_data);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_9->addWidget(label_4, 0, 5, 1, 1);

        show_calendar_button_1 = new QPushButton(tab_old_data);
        show_calendar_button_1->setObjectName(QString::fromUtf8("show_calendar_button_1"));

        gridLayout_9->addWidget(show_calendar_button_1, 2, 4, 1, 1);

        show_calendar_button_2 = new QPushButton(tab_old_data);
        show_calendar_button_2->setObjectName(QString::fromUtf8("show_calendar_button_2"));

        gridLayout_9->addWidget(show_calendar_button_2, 2, 5, 1, 1);

        tabs->addTab(tab_old_data, QString());

        gridLayout->addWidget(tabs, 1, 0, 1, 5);

        label_6 = new QLabel(Main_window);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/united-kingdom.png")));

        gridLayout->addWidget(label_6, 0, 3, 1, 1);

        label_5 = new QLabel(Main_window);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/poland.png")));

        gridLayout->addWidget(label_5, 0, 1, 1, 1);


        retranslateUi(Main_window);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Main_window);
    } // setupUi

    void retranslateUi(QWidget *Main_window)
    {
        Main_window->setWindowTitle(QApplication::translate("Main_window", "Wizualizacja Silos\303\263w", nullptr));
        radioButton_4->setText(QString());
        radioButton_3->setText(QString());
        volume_info_al_2->setText(QApplication::translate("Main_window", "70%", nullptr));
        temp_alarms_al_1->setText(QApplication::translate("Main_window", "TEMPERATURA", nullptr));
        temp_ico_al_1->setText(QString());
        temp_info_alarms_al_1->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        vol_alarms_al_1->setText(QApplication::translate("Main_window", "OBJ\304\230TO\305\232\304\206", nullptr));
        vol_ico_al_1->setText(QString());
        vol_info_alarms_al_1->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        hum_ico_al_1->setText(QString());
        hum_alarms_al_1->setText(QApplication::translate("Main_window", "WILGOTNO\305\232\304\206", nullptr));
        hum_info_alarms_al_1->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        volume_info_al_1->setText(QApplication::translate("Main_window", "70%", nullptr));
        temp_alarms_al_2->setText(QApplication::translate("Main_window", "TEMPERATURA", nullptr));
        vol_ico_al_2->setText(QString());
        temp_info_alarms_al_2->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        vol_info_alarms_al_2->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        temp_ico_al_2->setText(QString());
        vol_alarms_al_2->setText(QApplication::translate("Main_window", "OBJ\304\230TO\305\232\304\206", nullptr));
        hum_ico_al_2->setText(QString());
        hum_alarms_al_2->setText(QApplication::translate("Main_window", "WILGOTNO\305\232\304\206", nullptr));
        hum_info_alarms_al_2->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        tabs->setTabText(tabs->indexOf(tab_all_param), QApplication::translate("Main_window", "Wszystkie parametry", nullptr));
        temp_alarms_temp_2->setText(QApplication::translate("Main_window", "TEMPERATURA", nullptr));
        temp_info_alarms_temp_2->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        temp_ico_temp_2->setText(QString());
        temp_alarms_settings_button_silos_2->setText(QApplication::translate("Main_window", "Ustawienia alarm\303\263w", nullptr));
        temp_silos_1_second->setText(QApplication::translate("Main_window", "TextLabel", nullptr));
        temp_silos_1_first->setText(QApplication::translate("Main_window", "TextLabel", nullptr));
        temp_silos_2_first->setText(QApplication::translate("Main_window", "TextLabel", nullptr));
        temp_silos_2_second->setText(QApplication::translate("Main_window", "TextLabel", nullptr));
        temp_alarms_temp_1->setText(QApplication::translate("Main_window", "TEMPERATURA", nullptr));
        temp_info_alarms_temp_1->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        temp_ico_temp_1->setText(QString());
        temp_alarms_settings_button_silos_1->setText(QApplication::translate("Main_window", "Ustawienia alarm\303\263w", nullptr));
        tabs->setTabText(tabs->indexOf(tab_temp), QApplication::translate("Main_window", "Temperatura", nullptr));
        hum_silos_1_second->setText(QApplication::translate("Main_window", "TextLabel", nullptr));
        hum_silos_1_first->setText(QApplication::translate("Main_window", "TextLabel", nullptr));
        hum_silos_2_first->setText(QApplication::translate("Main_window", "TextLabel", nullptr));
        hum_silos_2_second->setText(QApplication::translate("Main_window", "TextLabel", nullptr));
        hum_alarms_hum_1->setText(QApplication::translate("Main_window", "WILGOTNO\305\232\304\206", nullptr));
        hum_info_alarms_hum_1->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        hum_ico_hum_1->setText(QString());
        hum_alarms_settings_button_silos_1->setText(QApplication::translate("Main_window", "Ustawienia alarm\303\263w", nullptr));
        hum_alarms_hum_2->setText(QApplication::translate("Main_window", "WILGOTNO\305\232\304\206", nullptr));
        hum_info_alarms_hum_2->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        hum_ico_hum_2->setText(QString());
        hum_alarms_settings_button_silos_2->setText(QApplication::translate("Main_window", "Ustawienia alarm\303\263w", nullptr));
        tabs->setTabText(tabs->indexOf(tab_humidity), QApplication::translate("Main_window", "Wilgotno\305\233\304\207", nullptr));
        vol_info_vol_1->setText(QApplication::translate("Main_window", "70%", nullptr));
        vol_info_vol_2->setText(QApplication::translate("Main_window", "70%", nullptr));
        vol_alarms_vol_1->setText(QApplication::translate("Main_window", "WYPE\305\201NIENIE", nullptr));
        vol_info_alarms_vol_1->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        vol_ico_vol_1->setText(QString());
        vol_alarms_settings_button_silos_1->setText(QApplication::translate("Main_window", "Ustawienia alarm\303\263w", nullptr));
        vol_alarms_vol_2->setText(QApplication::translate("Main_window", "WYPE\305\201NIENIE", nullptr));
        vol_info_alarms_vol_2->setText(QApplication::translate("Main_window", "Przekroczono poziom(I II) ", nullptr));
        vol_ico_vol_2->setText(QString());
        vol_alarms_settings_button_silos_2->setText(QApplication::translate("Main_window", "Ustawienia alarm\303\263w", nullptr));
        tabs->setTabText(tabs->indexOf(tab_volume), QApplication::translate("Main_window", "Wype\305\202nienie", nullptr));
        radioButton_2->setText(QApplication::translate("Main_window", "Sios 2", nullptr));
        label_3->setText(QApplication::translate("Main_window", "Wybierz parametr do przedstawienia na wykresie ", nullptr));
        radioButton->setText(QApplication::translate("Main_window", "Silos 1", nullptr));
        comboBox->setItemText(0, QApplication::translate("Main_window", "Wype\305\202nienie", nullptr));
        comboBox->setItemText(1, QApplication::translate("Main_window", "Temperatura 1", nullptr));
        comboBox->setItemText(2, QApplication::translate("Main_window", "Temperatura 2", nullptr));
        comboBox->setItemText(3, QApplication::translate("Main_window", "Wilgotno\305\233\304\207 1", nullptr));
        comboBox->setItemText(4, QApplication::translate("Main_window", "wilgotno\305\233\304\207 2", nullptr));

        label->setText(QApplication::translate("Main_window", "Od:", nullptr));
        apply_button->setText(QApplication::translate("Main_window", "Zatwierd\305\272", nullptr));
        label_2->setText(QApplication::translate("Main_window", "Wybierz silos", nullptr));
        label_4->setText(QApplication::translate("Main_window", "Do:", nullptr));
        show_calendar_button_1->setText(QApplication::translate("Main_window", "Poka\305\274 kalendarz", nullptr));
        show_calendar_button_2->setText(QApplication::translate("Main_window", "Poka\305\274 kalendarz", nullptr));
        tabs->setTabText(tabs->indexOf(tab_old_data), QApplication::translate("Main_window", "Dane historyczne", nullptr));
        label_6->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Main_window: public Ui_Main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
