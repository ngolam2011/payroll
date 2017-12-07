//
// Created by lngo9 on 12/4/2017.
//

#ifndef PAYROLL_ADDHOURLYEMPLOYEE_H
#define PAYROLL_ADDHOURLYEMPLOYEE_H


#include "AddEmployeeTransaction.h"

class AddHourlyEmployee : public AddEmployeeTransaction{
public:
    AddHourlyEmployee(int empId, const string &name, const string &address, double hourlyRate);

    PaymentClassification *GetClassification() const override;

    PaymentSchedule *GetSchedule() const override;


private:
    double itsHourlyRate;

};


#endif //PAYROLL_ADDHOURLYEMPLOYEE_H
