/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *expression;
    QPushButton *b_clear;
    QPushButton *b_percent;
    QPushButton *b_sqrt;
    QPushButton *b_del;
    QPushButton *b_8;
    QPushButton *b_9;
    QPushButton *b_7;
    QPushButton *b_mult;
    QPushButton *b_6;
    QPushButton *b_3;
    QPushButton *b_plus;
    QPushButton *b_minus;
    QPushButton *b_2;
    QPushButton *b_4;
    QPushButton *b_1;
    QPushButton *b_5;
    QPushButton *b_takeres;
    QPushButton *b_0;
    QPushButton *b_pm;
    QPushButton *b_point;
    QLabel *result;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(180, 303);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        expression = new QLabel(centralwidget);
        expression->setObjectName(QString::fromUtf8("expression"));
        expression->setGeometry(QRect(0, 20, 171, 51));
        QFont font;
        font.setPointSize(14);
        expression->setFont(font);
        expression->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter|AlignRight';\n"
"	border-bottom: 1px solid gray\n"
"}\n"
"\n"
"background-color: white\n"
""));
        b_clear = new QPushButton(centralwidget);
        b_clear->setObjectName(QString::fromUtf8("b_clear"));
        b_clear->setGeometry(QRect(0, 78, 45, 45));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        b_clear->setFont(font1);
        b_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(215,215,215)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #bebebe, stop: 1 #d7d7d7);\n"
"}\n"
""));
        b_percent = new QPushButton(centralwidget);
        b_percent->setObjectName(QString::fromUtf8("b_percent"));
        b_percent->setGeometry(QRect(45, 78, 45, 45));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(11);
        b_percent->setFont(font2);
        b_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(215,215,215)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #bebebe, stop: 1 #d7d7d7);\n"
"}\n"
""));
        b_sqrt = new QPushButton(centralwidget);
        b_sqrt->setObjectName(QString::fromUtf8("b_sqrt"));
        b_sqrt->setGeometry(QRect(90, 78, 45, 45));
        b_sqrt->setFont(font2);
        b_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(215,215,215)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #bebebe, stop: 1 #d7d7d7);\n"
"}\n"
""));
        b_del = new QPushButton(centralwidget);
        b_del->setObjectName(QString::fromUtf8("b_del"));
        b_del->setGeometry(QRect(135, 78, 45, 45));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Consolas"));
        font3.setPointSize(12);
        b_del->setFont(font3);
        b_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}\n"
""));
        b_8 = new QPushButton(centralwidget);
        b_8->setObjectName(QString::fromUtf8("b_8"));
        b_8->setGeometry(QRect(45, 123, 45, 45));
        b_8->setFont(font2);
        b_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        b_9 = new QPushButton(centralwidget);
        b_9->setObjectName(QString::fromUtf8("b_9"));
        b_9->setGeometry(QRect(90, 123, 45, 45));
        b_9->setFont(font2);
        b_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        b_7 = new QPushButton(centralwidget);
        b_7->setObjectName(QString::fromUtf8("b_7"));
        b_7->setGeometry(QRect(0, 123, 45, 45));
        b_7->setFont(font2);
        b_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        b_mult = new QPushButton(centralwidget);
        b_mult->setObjectName(QString::fromUtf8("b_mult"));
        b_mult->setGeometry(QRect(135, 123, 45, 45));
        b_mult->setFont(font3);
        b_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}\n"
""));
        b_6 = new QPushButton(centralwidget);
        b_6->setObjectName(QString::fromUtf8("b_6"));
        b_6->setGeometry(QRect(90, 168, 45, 45));
        b_6->setFont(font2);
        b_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        b_3 = new QPushButton(centralwidget);
        b_3->setObjectName(QString::fromUtf8("b_3"));
        b_3->setGeometry(QRect(90, 213, 45, 45));
        b_3->setFont(font2);
        b_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        b_plus = new QPushButton(centralwidget);
        b_plus->setObjectName(QString::fromUtf8("b_plus"));
        b_plus->setGeometry(QRect(135, 213, 45, 45));
        b_plus->setFont(font3);
        b_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}\n"
""));
        b_minus = new QPushButton(centralwidget);
        b_minus->setObjectName(QString::fromUtf8("b_minus"));
        b_minus->setGeometry(QRect(135, 168, 45, 45));
        b_minus->setFont(font3);
        b_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}\n"
""));
        b_2 = new QPushButton(centralwidget);
        b_2->setObjectName(QString::fromUtf8("b_2"));
        b_2->setGeometry(QRect(45, 213, 45, 45));
        b_2->setFont(font2);
        b_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        b_4 = new QPushButton(centralwidget);
        b_4->setObjectName(QString::fromUtf8("b_4"));
        b_4->setGeometry(QRect(0, 168, 45, 45));
        b_4->setFont(font2);
        b_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        b_1 = new QPushButton(centralwidget);
        b_1->setObjectName(QString::fromUtf8("b_1"));
        b_1->setGeometry(QRect(0, 213, 45, 45));
        b_1->setFont(font2);
        b_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        b_5 = new QPushButton(centralwidget);
        b_5->setObjectName(QString::fromUtf8("b_5"));
        b_5->setGeometry(QRect(45, 168, 45, 45));
        b_5->setFont(font2);
        b_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        b_takeres = new QPushButton(centralwidget);
        b_takeres->setObjectName(QString::fromUtf8("b_takeres"));
        b_takeres->setGeometry(QRect(135, 258, 45, 45));
        b_takeres->setFont(font3);
        b_takeres->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}\n"
""));
        b_0 = new QPushButton(centralwidget);
        b_0->setObjectName(QString::fromUtf8("b_0"));
        b_0->setGeometry(QRect(45, 258, 45, 45));
        b_0->setFont(font2);
        b_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        b_pm = new QPushButton(centralwidget);
        b_pm->setObjectName(QString::fromUtf8("b_pm"));
        b_pm->setGeometry(QRect(0, 258, 45, 45));
        b_pm->setFont(font2);
        b_pm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(215,215,215)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #bebebe, stop: 1 #d7d7d7);\n"
"}\n"
""));
        b_point = new QPushButton(centralwidget);
        b_point->setObjectName(QString::fromUtf8("b_point"));
        b_point->setGeometry(QRect(90, 258, 45, 45));
        b_point->setFont(font3);
        b_point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(215,215,215)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #bebebe, stop: 1 #d7d7d7);\n"
"}\n"
""));
        result = new QLabel(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(0, 10, 171, 21));
        QFont font4;
        font4.setPointSize(10);
        result->setFont(font4);
        result->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter|AlignRight';\n"
"	border-bottom: 1px solid gray\n"
"}\n"
"\n"
"background-color: white\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        expression->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        b_clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        b_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        b_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        b_del->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        b_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        b_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        b_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        b_mult->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        b_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        b_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        b_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        b_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        b_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        b_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        b_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        b_takeres->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        b_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        b_pm->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        b_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        result->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
