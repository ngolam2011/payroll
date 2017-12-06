//
// Created by lngo9 on 12/6/2017.
//

#ifndef PAYROLL_COMMISSIONEDCLASSIFICATION_H
#define PAYROLL_COMMISSIONEDCLASSIFICATION_H


#include "PaymentClassification.h"

class CommissionedClassification : public PaymentClassification{

public:
    CommissionedClassification(double salary, double commissionRate);
    double GetSalary();
    double GetCommissionRate();

private:
    double itsSalary;
    double itsCommissionRate;
};


#endif //PAYROLL_COMMISSIONEDCLASSIFICATION_H
