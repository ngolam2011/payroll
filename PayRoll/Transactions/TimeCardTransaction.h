//
// Created by lngo9 on 12/6/2017.
//

#ifndef PAYROLL_TIMECARDTRANSACTION_H
#define PAYROLL_TIMECARDTRANSACTION_H


#include "Transaction.h"

class TimeCardTransaction : public Transaction{
public:
    virtual ~TimeCardTransaction();
    TimeCardTransaction(long date, double hours, int empid);

    virtual void Execute();

private:
    int itsEmpid;
    long itsDate;
    double itsHours;
};


#endif //PAYROLL_TIMECARDTRANSACTION_H
