//
// Created by lngo9 on 12/4/2017.
//

#ifndef PAYROLL_HOURLYCLASSIFICATION_H
#define PAYROLL_HOURLYCLASSIFICATION_H


#include "PaymentClassification.h"
#include "TimeCard.h"
#include <list>
using namespace std;

class HourlyClassification : public PaymentClassification{

public:
    HourlyClassification(double hourlyRate);
    double GetHourlyRate();

    void AddTimeCard(TimeCard *pCard);

    TimeCard *GetTimeCard(int date);

private:
    double itsHourlyRate;
     list<TimeCard*> itsTimeCards;

};


#endif //PAYROLL_HOURLYCLASSIFICATION_H
