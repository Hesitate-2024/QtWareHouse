#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //连接信号槽
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::handleClicked);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleClicked()
{
    this->setWindowTitle("标题1");
    qDebug() << "标题1";
}

void Widget::handleClicked2()
{
    this->setWindowTitle("标题2");
    qDebug() << "标题2";
}


void Widget::on_pushButton_2_clicked()
{
    //断开信号槽
    //disconnect(ui->pushButton, &QPushButton::clicked, this, &Widget::handleClicked);
    //链接信号槽
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::handleClicked2);
}
