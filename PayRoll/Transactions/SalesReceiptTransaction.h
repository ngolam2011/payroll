//
// Created by lngo9 on 12/7/2017.
//

#ifndef PAYROLL_SALESRECEIPTTRANSACTION_H
#define PAYROLL_SALESRECEIPTTRANSACTION_H


#include "Transaction.h"

class SalesReceiptTransaction : public Transaction {
public:
    virtual ~SalesReceiptTransaction();
    SalesReceiptTransaction(long date, double amount, int empid);

    virtual void Execute();

private:
    int itsDate;
    double itsAmount;
    int itsEmpid;
};


#endif //PAYROLL_SALESRECEIPTTRANSACTION_H
