#include "tk.h"
#include <ctime>
#include <QApplication>
//#include "dialog.h"

int main(int argc, char *argv[])
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    //Dialog u;
    //if(ltm->tm_mday>19&&ltm->tm_mon>=5&&ltm->tm_year>=2024)
    //{
        //u.show();
    //}
    QApplication a(argc, argv);
    TK w;
    w.show();
    return a.exec();
}
