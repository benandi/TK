#include "dialog.h"
#include "ui_dialog.h"
//#include "tk.h"
//#include "./ui_tk.h"
//#include "windows.h"
#include <QMessageBox>
#include <QTranslator>
//#include <ctime>
//#include <cstring>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{

}


void Dialog::on_pushButton_clicked()
{
    /*TK w;
    if( ui->JH->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告信息"), tr("已注销"));
        return;
    }
    else
    {
        if( ui->JH->text()=="857655Gyx")
        {
            QMessageBox::warning(this, tr("警告信息"), tr("OK"));
            w.show();
            return;
        }
    }*/
}

