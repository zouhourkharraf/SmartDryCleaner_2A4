#include"fenetreserveur.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FenetreServeur FS;
    FS.show();
    return a.exec();
}
