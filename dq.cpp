#include "dq.h"

class DQData : public QSharedData
{
public:
};

DQ::DQ()
    : data(new DQData)
{}

DQ::DQ(const DQ &rhs)
    : data{rhs.data}
{}

DQ &DQ::operator=(const DQ &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

DQ::~DQ() {}
