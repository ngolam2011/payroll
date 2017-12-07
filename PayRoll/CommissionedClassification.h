//
// Created by lngo9 on 12/6/2017.
//

#ifndef PAYROLL_COMMISSIONEDCLASSIFICATION_H
#define PAYROLL_COMMISSIONEDCLASSIFICATION_H


#include "PaymentClassification.h"
#include "SalesReceipt.h"
#include <list>

using namespace std;
class CommissionedClassification : public PaymentClassification{

public:
    CommissionedClassification(double salary, double commissionRate);
    double GetSalary();
    double GetCommissionRate();

    SalesReceipt *GetSalesReceipt(int date);

    void AddSalesReceipt(SalesReceipt *pReceipt);

private:
    double itsSalary;
    double itsCommissionRate;
    list<SalesReceipt*> itsSalesReceipt;
};


#endif //PAYROLL_COMMISSIONEDCLASSIFICATION_H
