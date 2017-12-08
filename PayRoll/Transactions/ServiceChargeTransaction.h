//
// Created by lngo9 on 12/7/2017.
//

#ifndef PAYROLL_SERVICECHARGETRANSACTION_H
#define PAYROLL_SERVICECHARGETRANSACTION_H


#include "Transaction.h"

class ServiceChargeTransaction : public Transaction {
public:
    virtual ~ServiceChargeTransaction();
    ServiceChargeTransaction(int memberId, long date, double charge);
    virtual void Execute();

private:
    int itsMemberId;
    long itsDate;
    double itsCharge;
};


#endif //PAYROLL_SERVICECHARGETRANSACTION_H
