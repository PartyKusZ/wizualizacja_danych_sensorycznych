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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QUndoView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_window
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QCalendarWidget *calendarWidget;
    QWidget *tab_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QCommandLinkButton *commandLinkButton;
    QGroupBox *groupBox;
    QUndoView *undoView;
    QWidget *tab_4;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QWidget *widget_2;
    QWidget *widget_4;
    QWidget *widget_3;
    QWidget *tab_5;

    void setupUi(QWidget *Main_window)
    {
        if (Main_window->objectName().isEmpty())
            Main_window->setObjectName(QString::fromUtf8("Main_window"));
        Main_window->resize(761, 658);
        gridLayout = new QGridLayout(Main_window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(Main_window);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        timeEdit = new QTimeEdit(tab);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        gridLayout_4->addWidget(timeEdit, 0, 0, 1, 1);

        dateEdit = new QDateEdit(tab);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout_4->addWidget(dateEdit, 1, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(tab);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout_4->addWidget(dateTimeEdit, 2, 0, 1, 1);

        calendarWidget = new QCalendarWidget(tab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout_4->addWidget(calendarWidget, 3, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 2);

        toolButton = new QToolButton(tab_3);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout_3->addWidget(toolButton, 0, 2, 1, 1);

        commandLinkButton = new QCommandLinkButton(tab_3);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));

        gridLayout_3->addWidget(commandLinkButton, 1, 0, 1, 2);

        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));

        gridLayout_3->addWidget(groupBox, 2, 0, 2, 2);

        undoView = new QUndoView(tab_3);
        undoView->setObjectName(QString::fromUtf8("undoView"));

        gridLayout_3->addWidget(undoView, 3, 1, 1, 2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_2 = new QGridLayout(tab_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(tab_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border: 2px solid black;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius:1, fx:0.75, fy:0.75, stop:0 black, stop:1 red);\n"
"}"));

        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(tab_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border: 2px solid black;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius:1, fx:0.75, fy:0.75, stop:0 black, stop:1 blue);\n"
"}"));

        gridLayout_2->addWidget(widget_2, 0, 3, 1, 1);

        widget_4 = new QWidget(tab_4);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border: 2px solid black;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius:1, fx:0.75, fy:0.75, stop:0 black, stop:1 yellow\n"
");\n"
"}"));

        gridLayout_2->addWidget(widget_4, 1, 3, 1, 1);

        widget_3 = new QWidget(tab_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border: 2px solid black;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius:1, fx:0.75, fy:0.75, stop:0 black, stop:1 green\n"
");\n"
"}"));

        gridLayout_2->addWidget(widget_3, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(Main_window);
        QObject::connect(calendarWidget, SIGNAL(clicked(QDate)), calendarWidget, SLOT(showNextMonth()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Main_window);
    } // setupUi

    void retranslateUi(QWidget *Main_window)
    {
        Main_window->setWindowTitle(QApplication::translate("Main_window", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Main_window", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Main_window", "Tab 2", nullptr));
        pushButton->setText(QApplication::translate("Main_window", "PushButton", nullptr));
        toolButton->setText(QApplication::translate("Main_window", "...", nullptr));
        commandLinkButton->setText(QApplication::translate("Main_window", "CommandLinkButton", nullptr));
        groupBox->setTitle(QApplication::translate("Main_window", "GroupBox", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Main_window", "Strona", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Main_window", "Strona", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Main_window", "Strona", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_window: public Ui_Main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
