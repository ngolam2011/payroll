//
// Created by lngo9 on 12/6/2017.
//

#ifndef PAYROLL_DELETEEMPLOYEETRANSACTION_H
#define PAYROLL_DELETEEMPLOYEETRANSACTION_H


#include "Transaction.h"

class DeleteEmployeeTransaction : public Transaction{
public:
    virtual ~DeleteEmployeeTransaction();
    DeleteEmployeeTransaction(int empId);
    virtual void Execute();

private:
    int itsEmpId;
};


#endif //PAYROLL_DELETEEMPLOYEETRANSACTION_H
