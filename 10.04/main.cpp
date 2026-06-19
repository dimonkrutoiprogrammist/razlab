#include "classmates.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    classmates w;
    w.show();
    return QCoreApplication::exec();
}
