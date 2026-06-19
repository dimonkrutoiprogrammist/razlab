#ifndef X_Y_Z_H
#define X_Y_Z_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class x_y_z;
}
QT_END_NAMESPACE

class x_y_z : public QMainWindow
{
    Q_OBJECT

public:
    x_y_z(QWidget *parent = nullptr);
    ~x_y_z();

private slots:
    void on_pushButton_clicked();

private:
    Ui::x_y_z *ui;
};
#endif // X_Y_Z_H
