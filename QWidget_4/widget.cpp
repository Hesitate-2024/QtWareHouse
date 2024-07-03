#include "widget.h"
#include "ui_widget.h"
#include <QRect>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //随机数种子
    srand(time(0));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_access_pressed()
{
    ui->label->setText("哟西");
}

void Widget::on_pushButton_refuse_pressed()
{
    QRect rect = this->geometry();
    int x = rect.x();
    int y = rect.y();
    x = rand() % x;
    y = rand() % y;
    ui->pushButton_refuse->move(x, y);
}
