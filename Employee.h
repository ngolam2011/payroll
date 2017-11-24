//
// Created by lngo9 on 11/24/2017.
//

#ifndef PAYROLL_EMPLOYEE_H
#define PAYROLL_EMPLOYEE_H


#include <string>
using namespace std;

class PaymentClassification;

class Employee {
public:
    Employee(int empId, string name, string address);

    void SetClassification(PaymentClassification *pClassification);

    void SetSchedule(PaymentSchedule *pSchedule);

    void SetMethod(PaymentMethod *pMethod);
};


#endif //PAYROLL_EMPLOYEE_H
