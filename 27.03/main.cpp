#include "diapazon.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    diapazon w;
    w.show();
    return a.exec();
}
