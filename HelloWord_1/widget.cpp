#include "widget.h"
#include "ui_widget.h"
#include "QLabel"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLabel* lable = new QLabel(this); //给当前lable对象指定一个父对象


}

Widget::~Widget()
{
    delete ui;
}

