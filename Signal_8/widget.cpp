#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //连接槽函数
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::handleClock);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleClock()
{
    this->setWindowTitle("修改标题");
    qDebug() << "修改标题";
}

void Widget::handleClock1()
{
    this->setWindowTitle("切换槽函数");
    qDebug() << "切换槽函数";
}


void Widget::on_pushButton_2_clicked()
{
    //断开槽函数
    disconnect(ui->pushButton, &QPushButton::clicked, this, &Widget::handleClock);
    //连接新的槽函数
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::handleClock1);
}
