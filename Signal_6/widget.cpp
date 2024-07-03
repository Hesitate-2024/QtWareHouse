#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //连接信号和槽
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::on_pushButton_clicked);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    //设置标题1
    this->setWindowTitle("窗口标题1");
}

void Widget::on_pushButton_2_clicked()
{
    //切换信号槽
    disconnect(ui->pushButton, &QPushButton::clicked, this, &Widget::on_pushButton_clicked);
    //连接信号槽
    connect(ui->pushButton_2, &QPushButton::clicked, this, &Widget::on_pushButton_2_clicked);
    this->setWindowTitle("窗口标题2");
}
