#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ReplaceButton_clicked()
{
    
    QString text = ui->inputEdit->toPlainText();

    
    QString digits[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    QString words[]  = {"один", "два", "три", "четыре", "пять",
                       "шесть", "семь", "восемь", "девять"};

    
    for (int i = 0; i < 9; i++) {
        QRegExp rx(digits[i]);           
        text.replace(rx, words[i]);     
    }

    
    ui->outputEdit->setPlainText(text);
}