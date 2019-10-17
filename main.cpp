#include "mainwindow.h"
#include "product_extract.h"
#include <QApplication>
#include "form.h"
#include "variety_extract.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Form d;
    product_extract k;
    d.show();
    w.show();
    k.show();
    return a.exec();
}
