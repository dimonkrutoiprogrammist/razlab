#include "firsttop.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    firstTOP w;
    w.show();
    return QCoreApplication::exec();
}
