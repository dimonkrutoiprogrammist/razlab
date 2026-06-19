#ifndef DIAPAZON_H
#define DIAPAZON_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class diapazon;
}
QT_END_NAMESPACE

class diapazon : public QMainWindow
{
    Q_OBJECT

public:
    diapazon(QWidget *parent = nullptr);
    ~diapazon();

private slots:
    void on_pushButton_clicked();

private:
    Ui::diapazon *ui;
};
#endif // DIAPAZON_H
