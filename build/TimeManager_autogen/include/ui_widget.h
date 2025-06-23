/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QPushButton *btnGetDateTime;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_3;
    QTimeEdit *timeEdit;
    QLabel *label_2;
    QLabel *label;
    QDateEdit *dateEdit;
    QFormLayout *formLayout;
    QLineEdit *editSetTime;
    QPushButton *btnSetTime;
    QLineEdit *editSetDate;
    QPushButton *btnSetDate;
    QLineEdit *editSetDateTime;
    QPushButton *btnSetDateTime;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QLineEdit *editDate;
    QCalendarWidget *calendarWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpinBox *spinBox;
    QPushButton *btnSetCycle;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QSpacerItem *verticalSpacer;
    QPushButton *btnExit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(909, 444);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName("formLayout_2");
        btnGetDateTime = new QPushButton(groupBox);
        btnGetDateTime->setObjectName("btnGetDateTime");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, btnGetDateTime);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, label_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setDateTime(QDateTime(QDate(2025, 6, 23), QTime(18, 10, 30)));

        gridLayout->addWidget(dateTimeEdit, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setCalendarPopup(false);
        timeEdit->setCurrentSectionIndex(0);
        timeEdit->setTime(QTime(18, 8, 20));

        gridLayout->addWidget(timeEdit, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setDate(QDate(2025, 6, 23));

        gridLayout->addWidget(dateEdit, 1, 1, 1, 1);


        formLayout_2->setLayout(1, QFormLayout::ItemRole::LabelRole, gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        editSetTime = new QLineEdit(groupBox);
        editSetTime->setObjectName("editSetTime");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, editSetTime);

        btnSetTime = new QPushButton(groupBox);
        btnSetTime->setObjectName("btnSetTime");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, btnSetTime);

        editSetDate = new QLineEdit(groupBox);
        editSetDate->setObjectName("editSetDate");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, editSetDate);

        btnSetDate = new QPushButton(groupBox);
        btnSetDate->setObjectName("btnSetDate");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, btnSetDate);

        editSetDateTime = new QLineEdit(groupBox);
        editSetDateTime->setObjectName("editSetDateTime");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, editSetDateTime);

        btnSetDateTime = new QPushButton(groupBox);
        btnSetDateTime->setObjectName("btnSetDateTime");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, btnSetDateTime);


        formLayout_2->setLayout(1, QFormLayout::ItemRole::FieldRole, formLayout);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName("formLayout_3");
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label_7);

        editDate = new QLineEdit(groupBox_3);
        editDate->setObjectName("editDate");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, editDate);

        calendarWidget = new QCalendarWidget(groupBox_3);
        calendarWidget->setObjectName("calendarWidget");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::SpanningRole, calendarWidget);


        gridLayout_3->addWidget(groupBox_3, 0, 1, 2, 2);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        btnStart = new QPushButton(groupBox_2);
        btnStart->setObjectName("btnStart");

        gridLayout_2->addWidget(btnStart, 0, 0, 1, 1);

        btnStop = new QPushButton(groupBox_2);
        btnStop->setObjectName("btnStop");
        btnStop->setEnabled(false);

        gridLayout_2->addWidget(btnStop, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(99999999);
        spinBox->setValue(1000);

        horizontalLayout->addWidget(spinBox);

        btnSetCycle = new QPushButton(groupBox_2);
        btnSetCycle->setObjectName("btnSetCycle");

        horizontalLayout->addWidget(btnSetCycle);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 2);

        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName("progressBar");
        progressBar->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        progressBar->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        progressBar->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        progressBar->setValue(21);
        progressBar->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        progressBar->setOrientation(Qt::Orientation::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::Direction::TopToBottom);

        gridLayout_2->addWidget(progressBar, 3, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lcdNumber = new QLCDNumber(groupBox_2);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setProperty("intValue", QVariant(10));

        horizontalLayout_2->addWidget(lcdNumber);

        lcdNumber_2 = new QLCDNumber(groupBox_2);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setProperty("intValue", QVariant(26));

        horizontalLayout_2->addWidget(lcdNumber_2);

        lcdNumber_3 = new QLCDNumber(groupBox_2);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setProperty("intValue", QVariant(35));

        horizontalLayout_2->addWidget(lcdNumber_3);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 3);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 4, 1);

        verticalSpacer = new QSpacerItem(20, 56, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        btnExit = new QPushButton(Widget);
        btnExit->setObjectName("btnExit");

        gridLayout_3->addWidget(btnExit, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(276, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 56, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 4, 1, 1, 1);


        retranslateUi(Widget);
        QObject::connect(btnExit, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\227\266\346\234\237\346\227\266\351\227\264", nullptr));
        btnGetDateTime->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy-MM-dd HH:mm:ss", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
#if QT_CONFIG(statustip)
        timeEdit->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        timeEdit->setSpecialValueText(QString());
        timeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "HH:mm:ss", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\227\245        \346\234\237", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\227\266        \351\227\264", nullptr));
        dateEdit->setSpecialValueText(QString());
        dateEdit->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy\345\271\264MM\346\234\210dd\346\227\245", nullptr));
        btnSetTime->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        btnSetDate->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237", nullptr));
        btnSetDateTime->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", nullptr));
        btnStart->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        btnStop->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\346\265\201\351\200\235\346\227\266\351\227\264", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        spinBox->setSuffix(QCoreApplication::translate("Widget", "ms", nullptr));
        btnSetCycle->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\345\221\250\346\234\237", nullptr));
        btnExit->setText(QCoreApplication::translate("Widget", "\351\200\200   \345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
