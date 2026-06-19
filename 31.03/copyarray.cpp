#include "copyarray.h"
#include "./ui_copyarray.h"

copyArray::copyArray(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::copyArray)
{
    ui->setupUi(this);

    
    srand(time(nullptr));

    
    for(int i = 0; i < 10; i++){
        int randomNumber = rand() %100 +1;
        list_1.append(randomNumber);
        ui->textEdit->append(QString::number(list_1.at(i)) + " ");
    }

    
    for(int i = 0; i < 10; i++){
        int randomNumber_1 = rand() %100 +1;
        list_2.append(randomNumber_1);
        ui->textEdit_2->append(QString::number(list_2.at(i)) + " ");
    }
}

copyArray::~copyArray()
{
    delete ui;
}

void copyArray::on_pushButton_clicked()
{
    
    for(int i = 0; i < list_1.size(); i++){
        ui->textEdit_3->append(QString::number(list_2.at(i)) + " ");
    }

    
    for(int i = 0; i < list_1.size(); i++){
        ui->textEdit_3->append(QString::number(list_1.at(i)) + " ");
    }
}

