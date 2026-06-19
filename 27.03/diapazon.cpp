#include "diapazon.h"
#include "./ui_diapazon.h"
#include <QMessageBox>

diapazon::diapazon(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::diapazon)
{
    ui->setupUi(this);
}

diapazon::~diapazon()
{
    delete ui;
}

void diapazon::on_pushButton_clicked()
{
    //Число из строки
    QString numberStr = ui->lineEdit->text();
    bool ok;

    //Переобразования строки в число
    int number = numberStr.toInt(&ok);

    if(!ok){
        QMessageBox::information(this, "Ошибка", "Введите число!");
    }

    //Проверка числа на диапазон
    if(number < -999){
        QMessageBox::information(this, "Ошибка", "Число меньше заданного диапазона!");
    }
    if(number > 999){
        QMessageBox::information(this, "Ошибка", "Число больше заданного диапазона!");
    }

    //Диапазон от -999 до -100
    if(number > -999 && number < -99){
        ui->label->setText("Отрицательное трехзначное число!");
    }

    //Диапазон от -99 до -10
    if(number > -100 && number < -9){
        ui->label->setText("Отрицательное двухзначное число!");
    }

    //Диапазон от -9 до -1
    if(number > -10 && number < 0){
        ui->label->setText("Отрицательное однозначное число!");
    }

    //Диапазон 0
    if(number == 0){
        ui->label->setText("Нулевое");
    }

    //Диапазон от 1 до 9
    if(number > 0 && number < 10){
        ui->label->setText("Положительное однозначное число!");
    }

    //Диапазон от 10 до 99
    if(number > 9 && number < 100){
        ui->label->setText("Положительное двузначное число!");
    }

    //Диапазон от 100 до 999
    if(number > 99 && number < 999){
        ui->label->setText("Положительное трехзначное число!");
    }

}

