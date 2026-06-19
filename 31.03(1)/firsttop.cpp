#include "firsttop.h"
#include "./ui_firsttop.h"

firstTOP::firstTOP(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::firstTOP)
{
    ui->setupUi(this);


    srand(time(nullptr));

        
        for(int i = 0; i < 10; i++){
        int randomNumber = rand() %100 +1;
            list.append(randomNumber);
            ui->textEdit->append(QString::number(list.at(i)) + " ");
        }
}

firstTOP::~firstTOP()
{
    delete ui;
}

void firstTOP::on_pushButton_clicked()
{


   
    
    if(ui->radioButton->isChecked()){
        int randomNumber_1 = rand() %100 +1;
        list.push_back(randomNumber_1);
    }
    
    else if(ui->radioButton_2->isChecked()){
        list.removeLast();
    }

   
    ui->textEdit->clear();

    QList<int>::iterator it = list.begin();
    while(it != list.end()){
        ui->textEdit->append(QString::number(*it) + " ");
        it++;
    }
}

