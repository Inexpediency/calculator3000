#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtMath"

double num_first;
bool equal = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->b_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));

    connect(ui->b_pm, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->b_percent, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->b_sqrt, SIGNAL(clicked()), this, SLOT(operations()));

    connect(ui->b_plus, SIGNAL(clicked()), this, SLOT(math_op()));
    connect(ui->b_mult, SIGNAL(clicked()), this, SLOT(math_op()));
    connect(ui->b_del, SIGNAL(clicked()), this, SLOT(math_op()));
    connect(ui->b_minus, SIGNAL(clicked()), this, SLOT(math_op()));
    ui->b_del->setCheckable(true);
    ui->b_mult->setCheckable(true);
    ui->b_plus->setCheckable(true);
    ui->b_minus->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *pressedBut = (QPushButton *)sender();
    QString expression;
    double all_numbers;
    if (!equal) {
        if (ui->expression->text().contains(".") && pressedBut->text() == "0" && ui->expression->text().length() <= 14) {
            expression = ui->expression->text() + pressedBut->text();
        } else {
            all_numbers = (ui->expression->text() + pressedBut->text()).toDouble();
            expression = QString::number(all_numbers, 'g', 15);
        }
    } else {
        expression = pressedBut->text();
        equal = false;
    }
    ui->expression->setText(expression);
}

void MainWindow::on_b_point_clicked()
{
    if (!ui->expression->text().contains('.'))
        ui->expression->setText(ui->expression->text() + '.');

}

void MainWindow::operations()
{
    QPushButton *pressedBut = (QPushButton *)sender();

    double all_numbers;
    QString expression;

    if (pressedBut->text() == "±"){
        all_numbers = (ui->expression->text()).toDouble();
        all_numbers= all_numbers * (-1);
        expression = QString::number(all_numbers, 'g', 15);
        ui->expression->setText(expression);
    } else if (pressedBut->text() == "%"){
        all_numbers = (ui->expression->text()).toDouble();
        all_numbers= all_numbers * 0.01;
        expression = QString::number(all_numbers, 'g', 15);
        ui->expression->setText(expression);
    } else if (pressedBut->text() == "√"){
        all_numbers = (ui->expression->text()).toDouble();
        all_numbers = qSqrt(all_numbers);
        expression = QString::number(all_numbers, 'g', 15);
        ui->expression->setText(expression);
    }
}

void MainWindow::math_op()
{
    QPushButton *pressedBut = (QPushButton *)sender();
    num_first = ui->expression->text().toDouble();
    ui->result->setText(ui->expression->text());
    ui->expression->setText("0");
    pressedBut->setChecked(true);

}

void MainWindow::on_b_clear_clicked()
{
    ui->b_mult->setChecked(false);
    ui->b_del->setChecked(false);
    ui->b_plus->setChecked(false);
    ui->b_minus->setChecked(false);
    ui->expression->setText("0");
}

void MainWindow::on_b_takeres_clicked()
{
    double labelNumber, num_second;
    QString expression;
    num_second = ui->expression->text().toDouble();
    if(ui->b_plus->isChecked()) {
        labelNumber = num_first + num_second;
        expression = QString::number(labelNumber, 'g', 15);
        ui->expression->setText(expression);
        ui->b_plus->setChecked(false);
    } else if(ui->b_minus->isChecked()) {
        labelNumber = num_first - num_second;
        expression = QString::number(labelNumber, 'g', 15);
        ui->expression->setText(expression);
        ui->b_minus->setChecked(false);
    } else if(ui->b_del->isChecked()) {
        if (num_second == 0) {
            ui->expression->setText("Error");
            ui->b_del->setChecked(false);
        } else {
            labelNumber = double(num_first / num_second);
            expression = QString::number(labelNumber, 'g', 15);
            ui->expression->setText(expression);
            ui->b_del->setChecked(false);
        }
    } else if(ui->b_mult->isChecked()) {
        labelNumber = num_first * num_second;
        expression = QString::number(labelNumber, 'g', 15);
        ui->expression->setText(expression);
        ui->b_mult->setChecked(false);
    };
    ui->result->setText("");
    equal = true;
}
