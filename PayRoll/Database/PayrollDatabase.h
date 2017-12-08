//
// Created by lngo9 on 11/24/2017.
//

#ifndef PAYROLL_PAYROLLDATABASE_H
#define PAYROLL_PAYROLLDATABASE_H

#include <map>
using namespace std;

class Employee;

class PayrollDatabase {
    public:
        virtual ~PayrollDatabase();
        Employee* GetEmployee(int empId);
        void AddEmployee(int empId, Employee*);
        void DeleteEmployee(int empId);
        void clear() {itsEmployees.clear();}

    Employee *GetUnionMember(int memberId);

    void AddUnionMember(int memberId, Employee *employeeId);

private:
        map<int, Employee*> itsEmployees;
        map<int, int> itsMemberId;
};


#endif //PAYROLL_PAYROLLDATABASE_H
