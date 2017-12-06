//
// Created by lngo9 on 12/6/2017.
//

#ifndef PAYROLL_ADDCOMMISSIONEDEMPLOYEE_H
#define PAYROLL_ADDCOMMISSIONEDEMPLOYEE_H

#include "AddEmployeeTransaction.h"

class AddCommissionedEmployee : public AddEmployeeTransaction {
public:
    virtual ~AddCommissionedEmployee();
    AddCommissionedEmployee(int empid, string name, string address, double salary, double commissionRate);
    PaymentClassification* GetClassification() const;
    PaymentSchedule* GetSchedule() const;

private:
    double itsSalary;
    double itscommissionRate;
};


#endif //PAYROLL_ADDCOMMISSIONEDEMPLOYEE_H
