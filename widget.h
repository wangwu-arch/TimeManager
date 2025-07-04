#ifndef WIDGET_H
#define WIDGET_H

#include <QDateTime>
#include <QTimer>
#include <QWidget>
#include <QElapsedTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
    class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnGetDateTime_clicked();

    void on_btnSetTime_clicked();

    void on_btnSetDate_clicked();

    void on_btnSetDateTime_clicked();

    void on_btnStart_clicked();

    void on_btnStop_clicked();

    void on_btnSetCycle_clicked();

    void on_calendarWidget_selectionChanged();
    void updateCycleTime();

private:
    Ui::Widget *ui;
    QTimer *timer;
    QElapsedTimer cycleTime;
};
#endif  // WIDGET_H
