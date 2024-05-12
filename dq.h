#ifndef DQ_H
#define DQ_H

#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class DQData;

class DQ
{
public:
    DQ();
    DQ(const DQ &);
    DQ &operator=(const DQ &);
    ~DQ();

private:
    QSharedDataPointer<DQData> data;
};

#endif // DQ_H
