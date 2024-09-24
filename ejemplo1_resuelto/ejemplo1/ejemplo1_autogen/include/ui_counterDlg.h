/********************************************************************************
** Form generated from reading UI file 'counterDlg.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTERDLG_H
#define UI_COUNTERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Counter
{
public:
    QPushButton *button;
    QLCDNumber *lcdNumber;
    QPushButton *reset;
    QSlider *slider;
    QLCDNumber *displaySlider;

    void setupUi(QWidget *Counter)
    {
        if (Counter->objectName().isEmpty())
            Counter->setObjectName(QString::fromUtf8("Counter"));
        Counter->resize(400, 300);
        button = new QPushButton(Counter);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(90, 190, 201, 41));
        lcdNumber = new QLCDNumber(Counter);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 40, 301, 91));
        reset = new QPushButton(Counter);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(90, 250, 201, 41));
        slider = new QSlider(Counter);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setGeometry(QRect(10, 150, 160, 16));
        slider->setMinimum(1);
        slider->setOrientation(Qt::Horizontal);
        displaySlider = new QLCDNumber(Counter);
        displaySlider->setObjectName(QString::fromUtf8("displaySlider"));
        displaySlider->setGeometry(QRect(180, 150, 41, 20));

        retranslateUi(Counter);

        QMetaObject::connectSlotsByName(Counter);
    } // setupUi

    void retranslateUi(QWidget *Counter)
    {
        Counter->setWindowTitle(QCoreApplication::translate("Counter", "Counter", nullptr));
        button->setText(QCoreApplication::translate("Counter", "STOP", nullptr));
        reset->setText(QCoreApplication::translate("Counter", "RESET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Counter: public Ui_Counter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTERDLG_H
