//
// Created by lngo9 on 11/24/2017.
//

#include "PayrollDatabase.h"
#include "../Employee.h"


PayrollDatabase GpayrollDatabase;

PayrollDatabase::~PayrollDatabase() {

}

Employee *PayrollDatabase::GetEmployee(int empId) {
    return itsEmployees[empId];
}

void PayrollDatabase::AddEmployee(int empId, Employee* e) {
    itsEmployees[empId] = e;
}

void PayrollDatabase::DeleteEmployee(int empId) {
    map<int, Employee*>::iterator it;
    it = itsEmployees.find(empId);
    itsEmployees.erase(it);
}