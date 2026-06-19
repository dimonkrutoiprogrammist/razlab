#ifndef FIRSTTOP_H
#define FIRSTTOP_H

#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui {
class firstTOP;
}
QT_END_NAMESPACE

class firstTOP : public QMainWindow
{
    Q_OBJECT


public:
    explicit firstTOP(QWidget *parent = nullptr);
    ~firstTOP() override;

private slots:
    void on_pushButton_clicked();


private:
    Ui::firstTOP *ui;
    
    QList<int>list;
};
#endif 
