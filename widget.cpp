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
    QString strTime = ui->editSetTime->text();
    QTime time = QTime::fromString(strTime, "hh:mm:ss");
    if (time.isValid()) {
        ui->timeEdit->setTime(time);
    } else {
        ui->editSetTime->setText("Invalid time format");
    }
}

void Widget::on_btnSetDate_clicked() {
    QString strDate = ui->editSetDate->text();
    QDate date = QDate::fromString(strDate, "yyyy-MM-dd");
    if (date.isValid()) {
        ui->dateEdit->setDate(date);
    } else {
        ui->editSetDate->setText("Invalid date format");
    }
}

void Widget::on_btnSetDateTime_clicked() {
    QString strDateTime = ui->editSetDateTime->text();
    QDateTime dateTime = QDateTime::fromString(strDateTime, "yyyy-MM-dd hh:mm:ss");
    if (dateTime.isValid()) {
        ui->dateTimeEdit->setDateTime(dateTime);
    } else {
        ui->editSetDateTime->setText("Invalid date-time format");
    }
}

void Widget::on_btnStart_clicked() {
}

void Widget::on_btnStop_clicked() {
}

void Widget::on_btnSetCycle_clicked() {
}

void Widget::on_calendarWidget_selectionChanged() {
    QDate selectedDate = ui->calendarWidget->selectedDate();
    ui->editDate->setText(selectedDate.toString("yyyy年MM月dd日"));
}
