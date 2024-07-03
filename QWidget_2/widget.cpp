#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_2_clicked()
{
    //将按钮设置为不可点击
    if(ui->pushButton->isEnabled())
    {
        ui->pushButton->setEnabled(false);
    }
    else
    {
        ui->pushButton->setEnabled(true);
    }
}

void Widget::on_pushButton_clicked()
{
    //打印
    qDebug() << "on_pushButton_clicked";
}
