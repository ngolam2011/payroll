//
// Created by lngo9 on 11/24/2017.
//

#ifndef PAYROLL_ADDEMPLOYEETRANSACTION_H
#define PAYROLL_ADDEMPLOYEETRANSACTION_H

#include "Transaction.h"
#include "PayrollDatabase.h"
#include <string>

using namespace std;
class PaymentClassification;
class PaymentSchedule;

extern PayrollDatabase GpayrollDatabase;

class AddEmployeeTransaction : public Transaction {
    public:
        virtual ~AddEmployeeTransaction();
        AddEmployeeTransaction(int empid, string name, string address);
        virtual PaymentClassification* GetClassification() const = 0;
        virtual PaymentSchedule* GetSchedule() const = 0;
        virtual void Execute();

    private:
        int itsEmpid;
        string itsName;
        string itsAddress;

};


#endif //PAYROLL_ADDEMPLOYEETRANSACTION_H
