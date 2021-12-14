#include "MessengingApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MessengingApp w;
    w.show();
    return a.exec();
}
