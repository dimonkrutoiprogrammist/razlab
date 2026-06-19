#ifndef STACK_1_H
#define STACK_1_H

#include <QMainWindow>
#include <QStack>

QT_BEGIN_NAMESPACE
namespace Ui {
class stack_1;
}
QT_END_NAMESPACE

class stack_1 : public QMainWindow
{
    Q_OBJECT

public:
    stack_1(QWidget *parent = nullptr);
    ~stack_1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::stack_1 *ui;

    //Инициализация значения для вывода сложения
    int lastSum = 0;
};
#endif // STACK_1_H
