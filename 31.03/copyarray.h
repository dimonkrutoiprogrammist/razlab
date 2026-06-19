#ifndef COPYARRAY_H
#define COPYARRAY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class copyArray;
}
QT_END_NAMESPACE

class copyArray : public QMainWindow
{
    Q_OBJECT

public:
    explicit copyArray(QWidget *parent = nullptr);
    ~copyArray() override;

private slots:
    void on_pushButton_clicked();

private:
    Ui::copyArray *ui;
    
    QList<int>list_1;
    QList<int>list_2;
};
#endif 
