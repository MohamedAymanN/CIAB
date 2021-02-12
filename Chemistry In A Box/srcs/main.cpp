#include "ciab.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CIAB w;
    w.show();

    return a.exec();
}
