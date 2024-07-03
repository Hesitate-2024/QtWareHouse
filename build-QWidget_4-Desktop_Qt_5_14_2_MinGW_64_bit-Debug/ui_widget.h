/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *pushButton_access;
    QPushButton *pushButton_refuse;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 150, 151, 41));
        pushButton_access = new QPushButton(Widget);
        pushButton_access->setObjectName(QString::fromUtf8("pushButton_access"));
        pushButton_access->setGeometry(QRect(170, 340, 101, 41));
        pushButton_refuse = new QPushButton(Widget);
        pushButton_refuse->setObjectName(QString::fromUtf8("pushButton_refuse"));
        pushButton_refuse->setGeometry(QRect(470, 340, 101, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\220\214\346\204\217\344\270\215\357\274\237", nullptr));
        pushButton_access->setText(QCoreApplication::translate("Widget", "\345\220\214\346\204\217", nullptr));
        pushButton_refuse->setText(QCoreApplication::translate("Widget", "\346\213\222\347\273\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
