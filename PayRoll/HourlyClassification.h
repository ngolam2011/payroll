//
// Created by lngo9 on 12/4/2017.
//

#ifndef PAYROLL_HOURLYCLASSIFICATION_H
#define PAYROLL_HOURLYCLASSIFICATION_H


#include "PaymentClassification.h"

class HourlyClassification : public PaymentClassification{

public:
    HourlyClassification(double hourlyRate);
    double GetHourlyRate();

private:
    double itsHourlyRate;

};


#endif //PAYROLL_HOURLYCLASSIFICATION_H
