//
// Created by lngo9 on 11/24/2017.
//

#include "Employee.h"

class PaymentClassification;

class PaymentSchedule;

class PaymentMethod;

Employee::Employee(int empId, string name, string address)
        : itsEmpid(empId)
        , itsName(name)
        , itsAddress(address){}

void Employee::SetClassification(PaymentClassification *pClassification) {

}

void Employee::SetSchedule(PaymentSchedule *pSchedule) {

}

void Employee::SetMethod(PaymentMethod *pMethod) {

}

string Employee::GetName() {
    return itsName;
}

PaymentSchedule *Employee::GetSchedule() {
    return itsPaymentSchedule;
}

PaymentMethod *Employee::GetMethod() {
    return itsPaymentMethod;
}

PaymentClassification* Employee::GetClassification() {

}

