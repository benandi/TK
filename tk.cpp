#include "tk.h"
#include "./ui_tk.h"
#include "windows.h"
#include <QMessageBox>
#include <QTranslator>
#include <ctime>
#include <cstring>


TK::TK(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TK)
{
    ui->setupUi(this);
}

TK::~TK()
{
    delete ui;
}

void TK::on_pushButton_clicked()
{
    time_t now = time(0);

    tm *ltm = localtime(&now);
    if(ltm->tm_mday>19&&ltm->tm_mon>=5&&ltm->tm_year>=2024)
    {
        return;
    }
    system("TASKKILL /F /IM studentmain.exe");
}


void TK::on_pushButton_2_clicked()
{
    time_t now = time(0);

    tm *ltm = localtime(&now);
    if(ltm->tm_mday>19&&ltm->tm_mon>=5&&ltm->tm_year>=2024)
    {
        return;
    }
    std::string str1 = "TASKKILL /F /IM \0";
    std::string str2 = "google";
    std::string str3 = "google";
    //str1 += str2;
//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

    if( ui->line2->text().isEmpty()
        || ui->lineY->text().isEmpty() )
    {
        QMessageBox::warning(this, tr("警告信息"), tr("程序名或密钥为空，不能执行。"));
        return;
    }
    QString ltmMin = QString::number(ltm->tm_min*4+11);
    if(ui->lineY->text()==ltmMin)
    {
        str2 = ui->line2->text().toStdString();
        str1 += str2;
        system(str1.c_str());
    }
    else
    {
        QMessageBox::warning(this, tr("警告信息"), tr("密钥错误"));
    }

}


void TK::on_pushButton_3_clicked()
{
     //基于当前系统的当前日期/时间
    time_t now = time(0);

    // 把 now 转换为字符串形式
    char* dt = ctime(&now);


    if (QMessageBox::Yes == QMessageBox::question(this,
                                                  tr("KEY:"), tr(dt),
                                                  QMessageBox::Yes | QMessageBox::No,
                                                  QMessageBox::Yes))
    {
        QMessageBox::information(this, tr("Hmmm..."),
                                 tr("I'm glad to hear that!"));
    }
    else
    {
        QMessageBox::information(this, tr("Hmmm..."),
                                 tr("I'm sorry!"));
    }

}

