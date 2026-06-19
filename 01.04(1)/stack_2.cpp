#include "stack_2.h"
#include "./ui_stack_2.h"
#include <QQueue>
stack_2::stack_2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::stack_2)
{
    ui->setupUi(this);
}
stack_2::~stack_2()
{
    delete ui;
}
void stack_2::on_pushButton_clicked()
{
   
    QQueue<int> que;

    
    for(int i = 0; i < 8; i++)
    {
        int num = -20 + rand() % 51;
        que.enqueue(num);
    }

   
    QVector<int> temp;
    while(!que.isEmpty())
    {
        temp.append(que.dequeue());
    }

   
    for(int i = 0; i < temp.size() - 1; i++)
    {
        int diff = qAbs(temp[i] - temp[i + 1]);
        que.enqueue(diff);
    }

    
    QString text = "Очередь:\n";
    for(int val : temp)
    {
        text += QString::number(val) + "\n";
    }
    text += "\nМодули разности:\n";

    
    QQueue<int> tempQue = que;
    while(!tempQue.isEmpty())
    {
        text += QString::number(tempQue.dequeue()) + "\n";
    }

   
    ui->textEdit->setText(text);
}
