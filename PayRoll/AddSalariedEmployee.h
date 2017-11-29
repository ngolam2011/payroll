//
// Created by lngo9 on 11/24/2017.
//

#ifndef PAYROLL_ADDSALARIEDEMPLOYEE_H
#define PAYROLL_ADDSALARIEDEMPLOYEE_H

#include "AddEmployeeTransaction.h"

#include <string>
using namespace std;

class AddSalariedEmployee : public AddEmployeeTransaction {
    public:
        virtual ~AddSalariedEmployee();
        AddSalariedEmployee(int empid, string name, string address, double salary);
        PaymentClassification* GetClassification() const;
        PaymentSchedule* GetSchedule() const;


    private:
        double itsSalary;
};


#endif //PAYROLL_ADDSALARIEDEMPLOYEE_H
