#include "file.h"
#include "./ui_file.h"
#include <QFile>
#include <QMessageBox>
#include <cmath>

file::file(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::file)
{
    ui->setupUi(this);
}

file::~file()
{
    delete ui;
}

void file::on_pushButton_2_clicked()
{
    QFile myFile("/home/watr1x/Документы/Coding/Qt/f"); 

    if(!myFile.exists()){
        QMessageBox::warning(this, "Ошибка!", "Файл не открывается");   
        return;
    }

    if(!myFile.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this, "Ошибка!", "Файл недоступен для чтения"); 
        return;
    }

    QTextStream stream(&myFile);   

    QString buffer = stream.readAll();

    ui->textEdit_2->setText(buffer); 

    myFile.close();
}




void file::on_pushButton_clicked()
{

    QStringList numbers = ui->textEdit_2->toPlainText().split(" ", Qt::SkipEmptyParts); 

    QList<double> values;  

    for(int i = 0; i < numbers.length(); i++){
        double val = numbers[i].toDouble(); 
        values.append(val); 
    }

    int n = values.size();
    QString result;

  
    double maxVal = values[0];
    for(int i = 0; i < n; i++){
        if(values[i] > maxVal){
            maxVal = values[i];
        }
    }

    
    double minEven = 0;
    bool hasEven = false;

    for(int i = 0; i < n; i++){
        if((i + 1) % 2 == 0){
            if(!hasEven || values[i] < minEven){
                minEven = values[i];
                hasEven = true;
            }
        }
    }

   
    double maxOdd = 0;

    for (int i = 0; i < n; i += 2) {
        double absVal = fabs(values[i]);
        if (absVal > maxOdd) {
            maxOdd = absVal;
        }
    }

    
    double diffenent = values[0] - values[n-1];

    
    result = "Вычисления\n";
    result += "Наибольшее: " + QString::number(maxVal) + "\n";
    result += "Наииеньшее с четным индексом: " + QString::number(minEven) + "\n";
    result += "Наибольшее с нечетным номером: " + QString::number(maxOdd) + "\n";
    result += "Разность между первым и последним: " + QString::number(diffenent) + "\n";


    ui->textEdit->setText(result);
}

