#include "widget.h"
#include "ui_widget.h"
#include <QLineEdit>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLineEdit* edi = new QLineEdit(this);
    edi->setText("hello world");
}

Widget::~Widget()
{
    delete ui;
}

