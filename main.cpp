#include "menucard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MenuCard w;
    w.showMaximized();

    return a.exec();
}
