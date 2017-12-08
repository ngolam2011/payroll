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

Employee *PayrollDatabase::GetUnionMember(int memberId) {
   auto it = itsMemberId.find(memberId);
    return GetEmployee(it->second);
}

void PayrollDatabase::AddUnionMember(int memberId, Employee *employeeId) {
    itsMemberId.insert(std::make_pair(memberId, employeeId->GetId()));
}
