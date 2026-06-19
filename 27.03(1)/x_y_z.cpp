#include "x_y_z.h"
#include "./ui_x_y_z.h"
#include <QMessageBox>

x_y_z::x_y_z(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::x_y_z)
{
    ui->setupUi(this);
}

x_y_z::~x_y_z()
{
    delete ui;
}

void x_y_z::on_pushButton_clicked()
{
    //Получение текста
    QString number_x = ui -> lineEdit -> text();
    QString number_y = ui -> lineEdit_2 -> text();
    QString number_z = ui -> lineEdit_3 -> text();
    bool ok;

    //Преобразование текста в int
    int xnumber = number_x.toInt(&ok);
    if(!ok){
        QMessageBox::information(this, "Ошибка", "Введите число!");
    }

    int ynumber = number_y.toInt(&ok);
    if(!ok){
        QMessageBox::information(this, "Ошибка", "Введите число!");
    }

    int znumber = number_z.toInt(&ok);
    if(!ok){
        QMessageBox::information(this, "Ошибка", "Введите число!");
    }

    //Вывод в обратном порядке z y x
    ui->lineEdit_4->setText(QString::number(znumber) + " " + QString::number(ynumber) + " " + QString::number(xnumber));
}

