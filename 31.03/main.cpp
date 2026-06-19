#include "copyarray.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    copyArray w;
    w.show();
    return QCoreApplication::exec();
}
