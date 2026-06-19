#include "x_y_z.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    x_y_z w;
    w.show();
    return a.exec();
}
