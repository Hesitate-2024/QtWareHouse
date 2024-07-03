#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

//自定义信号
signals:
    void mySignal();
public slots:
    void handleMySignal();

private slots:
    void on_pushButton_clicked(bool checked);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
