#include "widget.h"
#include "ui_widget.h"
#include <QRect>
#include <QPushButton>
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


void Widget::on_pushButton_up_clicked()
{
    //先获取target本身的属性
    QRect rect = ui->pushButton_target->geometry();
    //打印位置信息
    qDebug() << rect;
    //修改target的属性值，使其向上平移
    ui->pushButton_target->setGeometry(rect.x(), rect.y() - 5, rect.width(), rect.height());

}

void Widget::on_pushButton_down_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    qDebug() << rect;
    ui->pushButton_target->setGeometry(rect.x(), rect.y() + 5, rect.width(), rect.height());
}


void Widget::on_pushButton_left_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    qDebug() << rect;
    ui->pushButton_target->setGeometry(rect.x() - 5, rect.y(), rect.width(), rect.height());
}

void Widget::on_pushButton_right_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    qDebug() << rect;
    ui->pushButton_target->setGeometry(rect.x() + 5, rect.y(), rect.width(), rect.height());
}
