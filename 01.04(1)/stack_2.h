#ifndef STACK_2_H
#define STACK_2_H
#include <QQueue>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class stack_2;
}
QT_END_NAMESPACE

class stack_2 : public QMainWindow
{
    Q_OBJECT

public:
    stack_2(QWidget *parent = nullptr);
    ~stack_2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::stack_2 *ui;
    int lastSum = 0;
    QQueue<int> queue;
};
#endif // STACK_2_H
