#include "tk.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TK w;
    w.show();
    return a.exec();
}
