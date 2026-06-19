#include "classmates.h"
#include "./ui_classmates.h"
#include <QString>

classmates::classmates(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::classmates)
{
    ui->setupUi(this);

    filldata();
    updateDisplay();
}

classmates::~classmates()
{
    delete ui;
}


void classmates::filldata(){
    QSet<QString> AnnaGuest;                
    AnnaGuest << "Виктор" << "Анастасия";   
    classMates["Анна"] = AnnaGuest;         

    QSet<QString> AnastasyaGuest;               
    AnastasyaGuest << "Анна" << "Виктор";       
    classMates["Анастасия"] = AnastasyaGuest;   

    QSet<QString> ViktorGuest;        
    ViktorGuest << "Анна";             
    classMates["Виктор"] = ViktorGuest;
}


void classmates::updateDisplay(){
    ui->textEdit->clear();  

    for(auto it = classMates.begin(); it != classMates.end(); ++it){
        QString student = it.key();
        QSet<QString> guests = it.value();

        ui->textEdit->append("Ученик: " + student);
        ui->textEdit->append("Был в гостях у: ");

        for(QString guestName : guests){
            ui->textEdit->append(guestName);
        }
        ui->textEdit->append(" ");
    }
}


void classmates::on_pushButton_clicked()
{
    
    if(classMates.isEmpty()) {
        ui->lineEdit->setText("Список пуст");
        return;
    }

   
    auto it = classMates.begin();
    QSet<QString> commonGuests = it.value();

    
    for(; it != classMates.end(); ++it) {
        commonGuests.intersect(it.value());
    }

   
    if(commonGuests.isEmpty()) {
        ui->lineEdit->setText("Нет человека");
    }
    else {
        QString result;
        for(QString person : commonGuests) {
            result += person + " ";
        }
        ui->lineEdit->setText(result);
    }
}

