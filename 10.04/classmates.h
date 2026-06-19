#ifndef CLASSMATES_H
#define CLASSMATES_H

#include <QMainWindow>
#include <QSet>
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui {
class classmates;
}
QT_END_NAMESPACE

class classmates : public QMainWindow
{
    Q_OBJECT

public:
    explicit classmates(QWidget *parent = nullptr);
    ~classmates() override;

private slots:
    void on_pushButton_clicked();

private:
    Ui::classmates *ui;

    QMap<QString, QSet<QString>> classMates;    //Объявляем экземпляр класса
    void filldata();                            //Заполнение данных
    void updateDisplay();                       //Обновление отображения
};
#endif // CLASSMATES_H
