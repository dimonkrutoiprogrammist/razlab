#ifndef FILE_H
#define FILE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class file;
}
QT_END_NAMESPACE

class file : public QMainWindow
{
    Q_OBJECT

public:
    explicit file(QWidget *parent = nullptr);
    ~file() override;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::file *ui;

    //Массив чисел
    QList<double> numbers;
};
#endif // FILE_H
