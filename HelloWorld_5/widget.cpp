#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::handleClick);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleClick()
{
    //点击之后切换文本为Hello Qt
    if(ui->pushButton->text() == QString("PushButton"))
    {
        ui->pushButton->setText("hello Qt");
    }
    else
    {
         ui->pushButton->setText("PushButton");
    }

}

