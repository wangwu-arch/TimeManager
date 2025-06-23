#include "widget.h"

#include "ui_widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget) {
    ui->setupUi(this);
}

Widget::~Widget() {
    delete ui;
}

void Widget::on_btnGetDateTime_clicked() {
    QDateTime currentDateTime = QDateTime::currentDateTime();
    ui->dateEdit->setDate(currentDateTime.date());
    ui->editSetDate->setText(currentDateTime.date().toString("yyyy-MM-dd"));
    ui->timeEdit->setTime(currentDateTime.time());
    ui->editSetTime->setText(currentDateTime.time().toString("hh:mm:ss"));
    ui->dateTimeEdit->setDateTime(currentDateTime);
    ui->editSetDateTime->setText(currentDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}

void Widget::on_btnSetTime_clicked() {
}

void Widget::on_btnSetDate_clicked() {
}

void Widget::on_btnSetDateTime_clicked() {
}

void Widget::on_btnStart_clicked() {
}

void Widget::on_btnStop_clicked() {
}

void Widget::on_btnSetCycle_clicked() {
}
