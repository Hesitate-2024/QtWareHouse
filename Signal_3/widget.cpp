#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //链接自定义信号和槽
    connect(this, &Widget::mySignal, this, &Widget::handleMySignal);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleMySignal()
{
    this->setWindowTitle("自定义信号");
}


void Widget::on_pushButton_clicked(bool checked)
{
    emit mySignal();
}
