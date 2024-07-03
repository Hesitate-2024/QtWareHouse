#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton* button = new QPushButton(this);
    button->setText("按钮");
    connect(button, &QPushButton::clicked, this, &Widget::signalHandl);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::signalHandl()
{
    this->setWindowTitle("按钮已经按下");
}

