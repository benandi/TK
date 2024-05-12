#ifndef TK_H
#define TK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class TK;
}
QT_END_NAMESPACE

class TK : public QMainWindow
{
    Q_OBJECT

public:
    TK(QWidget *parent = nullptr);
    ~TK();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::TK *ui;
};
#endif // TK_H
