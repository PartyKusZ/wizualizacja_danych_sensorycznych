/********************************************************************************
** Form generated from reading UI file 'Alarms_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMS_WINDOW_H
#define UI_ALARMS_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alarms_window
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox;
    QLabel *label_2;

    void setupUi(QWidget *alarms_window)
    {
        if (alarms_window->objectName().isEmpty())
            alarms_window->setObjectName(QString::fromUtf8("alarms_window"));
        alarms_window->resize(461, 167);
        alarms_window->setStyleSheet(QString::fromUtf8("#alarms_window {\n"
"background: #010101;\n"
"}\n"
"\n"
"\n"
"QSpinBox{\n"
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
        gridLayout = new QGridLayout(alarms_window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(alarms_window);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(alarms_window);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(11);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel);
        buttonBox->setCenterButtons(false);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 1);

        horizontalSlider_2 = new QSlider(alarms_window);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 1, 0, 1, 1);

        horizontalSlider = new QSlider(alarms_window);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(horizontalSlider, 3, 0, 1, 1);

        spinBox_2 = new QSpinBox(alarms_window);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        QFont font1;
        font1.setPointSize(16);
        spinBox_2->setFont(font1);
        spinBox_2->setButtonSymbols(QAbstractSpinBox::PlusMinus);

        gridLayout->addWidget(spinBox_2, 1, 1, 1, 1);

        spinBox = new QSpinBox(alarms_window);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setFont(font1);
        spinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout->addWidget(spinBox, 3, 1, 1, 1);

        label_2 = new QLabel(alarms_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);


        retranslateUi(alarms_window);

        QMetaObject::connectSlotsByName(alarms_window);
    } // setupUi

    void retranslateUi(QWidget *alarms_window)
    {
        alarms_window->setWindowTitle(QApplication::translate("alarms_window", "Alarm", nullptr));
        label->setText(QApplication::translate("alarms_window", "Poziom ostrze\305\274enia:", nullptr));
        label_2->setText(QApplication::translate("alarms_window", "Poziom krytyczny:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alarms_window: public Ui_alarms_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMS_WINDOW_H
