//
// Created by lngo9 on 11/24/2017.
//

#include "AddEmployeeTransaction.h"
#include "HoldMethod.h"
#include "Employee.h"

class PaymentMethod;
class PaymentSchedule;
class PaymentClassification;



AddEmployeeTransaction::~AddEmployeeTransaction() {
}

AddEmployeeTransaction::
AddEmployeeTransaction(int empid, string name, string address)
        : itsEmpid(empid)
        , itsName(name)
        , itsAddress(address){}

PaymentClassification* AddEmployeeTransaction::GetClassification() const {}

PaymentSchedule* AddEmployeeTransaction::GetSchedule() const {}

void AddEmployeeTransaction::Execute() {
    PaymentClassification* pc = GetClassification();
    PaymentSchedule* ps = GetSchedule();
    PaymentMethod* pm = new HoldMethod();
    Employee* e = new Employee(itsEmpid, itsName, itsAddress);
    e->SetClassification(pc);
    e->SetSchedule(ps);
    e->SetMethod(pm);
    GpayrollDatabase.AddEmployee(itsEmpid, e);

}