//
// Created by lngo9 on 11/24/2017.
//

#ifndef PAYROLL_EMPLOYEE_H
#define PAYROLL_EMPLOYEE_H


#include <string>
#include "UnionAffiliation.h"
#include "Affliation.h"

using namespace std;

class PaymentClassification;

class PaymentMethod;

class PaymentSchedule;

class Employee {
public:
    Employee(int empId, string name, string address);

    void SetClassification(PaymentClassification *pClassification);

    PaymentClassification *GetClassification();

    void SetSchedule(PaymentSchedule *pSchedule);

    void SetMethod(PaymentMethod *pMethod);

    string GetName();

    PaymentSchedule* GetSchedule();

    PaymentMethod *GetMethod();

    void SetAffiliation(Affliation *affiliation);

    int GetId();

    Affliation *GetAffiliation();

private:
    string itsName;
    int itsEmpid;
    string itsAddress;
    PaymentSchedule* itsPaymentSchedule;
    PaymentMethod* itsPaymentMethod;
    PaymentClassification* itsPaymentClassification;
    Affliation *itsAffiliation;
};


#endif //PAYROLL_EMPLOYEE_H
