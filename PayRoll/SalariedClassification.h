//
// Created by lngo9 on 11/25/2017.
//

#ifndef PAYROLL_SALARIEDCLASSIFICATION_H
#define PAYROLL_SALARIEDCLASSIFICATION_H

#include "PaymentClassification.h"


class SalariedClassification : public PaymentClassification {

public:
    SalariedClassification(double d);
    double GetSalary();

private:
    double itsSalary;
};

#endif //PAYROLL_SALARIEDCLASSIFICATION_H
