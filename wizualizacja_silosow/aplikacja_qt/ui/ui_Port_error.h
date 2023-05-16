/********************************************************************************
** Form generated from reading UI file 'Port_error.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORT_ERROR_H
#define UI_PORT_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Port_error
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QListView *list_view;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Port_error)
    {
        if (Port_error->objectName().isEmpty())
            Port_error->setObjectName(QString::fromUtf8("Port_error"));
        Port_error->resize(402, 269);
        Port_error->setMinimumSize(QSize(0, 0));
        Port_error->setStyleSheet(QString::fromUtf8("#Port_error {\n"
"background: #010101;\n"
"}\n"
"\n"
"\n"
"QListView{\n"
"background: #26292e;\n"
"color: #ffffff\n"
"}\n"
"\n"
"QPushButton{\n"
"background: #9b9a9f;\n"
"color: white;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"                         background-color: #b5b5b5;  \n"
"                     }\n"
"                         QPushButton:pressed {\n"
"                         background-color: #808080;  \n"
"                         }\n"
"\n"
"QLabel{\n"
"color: #ffffff;\n"
"}"));
        gridLayout = new QGridLayout(Port_error);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Port_error);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        list_view = new QListView(Port_error);
        list_view->setObjectName(QString::fromUtf8("list_view"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(list_view->sizePolicy().hasHeightForWidth());
        list_view->setSizePolicy(sizePolicy);
        list_view->setFont(font);

        gridLayout->addWidget(list_view, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Port_error);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        buttonBox = new QDialogButtonBox(Port_error);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(Port_error);

        QMetaObject::connectSlotsByName(Port_error);
    } // setupUi

    void retranslateUi(QWidget *Port_error)
    {
        Port_error->setWindowTitle(QApplication::translate("Port_error", "B\305\202\304\205d otawarcia portu", nullptr));
        label->setText(QApplication::translate("Port_error", "Nast\304\205pi\305\202\302\240b\305\202\304\205d podczas pr\303\263by otwarcia domy\305\233lego portu. Wybierz inny z dost\304\231pnych i zatwierd\305\272.", nullptr));
        label_2->setText(QApplication::translate("Port_error", "Wybrany port: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Port_error: public Ui_Port_error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORT_ERROR_H
