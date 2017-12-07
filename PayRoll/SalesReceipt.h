//
// Created by lngo9 on 12/7/2017.
//

#ifndef PAYROLL_SALESRECEIPT_H
#define PAYROLL_SALESRECEIPT_H


class SalesReceipt {
public:
    virtual ~SalesReceipt();
    SalesReceipt(int date, double amount);
    double GetAmount();
    int GetDate();

private:
    int itsDate;
    double itsAmount;
};


#endif //PAYROLL_SALESRECEIPT_H
