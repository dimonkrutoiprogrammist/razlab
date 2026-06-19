#include "stack_1.h"
#include "./ui_stack_1.h"
#include <QStack>
#include <cstdlib>

stack_1::stack_1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::stack_1)
{
    ui->setupUi(this);

   
    srand(time(nullptr));

    
    QStack<int> stack;
    int sum = 0;

  
    for(int i = 0; i < 10; i++){
        int num = -10 + rand() % 31;
        stack.push(num);

      
        if(num > 0){
            sum += num;
        }
    }

 
    QString text;
    for(int i = stack.size() - 1; i >= 0; i--)
    {
        text += QString::number(stack.at(i)) + "\n";
    }

    ui->textEdit->setText(text);

 
    lastSum = sum;
}

stack_1::~stack_1()
{
    delete ui;
}

void stack_1::on_pushButton_clicked()
{
    
    ui->lineEdit->setText(QString::number(lastSum));

}

