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
        void clear() {itsEmployees.clear();}
    private:
        map<int, Employee*> itsEmployees;
};


#endif //PAYROLL_PAYROLLDATABASE_H
