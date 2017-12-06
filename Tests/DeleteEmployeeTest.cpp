//
// Created by lngo9 on 12/6/2017.
//
#include <iostream>
using std::cerr;
using std::endl;

#include <gtest/gtest.h>
#include "../PayRoll/Transactions/AddCommissionedEmployee.h"
#include "../PayRoll/Employee.h"
#include "../PayRoll/Database/PayrollDatabase.h"
#include "../PayRoll/Transactions/DeleteEmployeeTransaction.h"

TEST(Transaction, DeleteEmployee) {
        cerr << "TestDeleteEmployee" << endl;
    int empId = 3;
    AddCommissionedEmployee t(empId, "Lance", "Home", 2500, 3.2);
    t.Execute();
    {
        Employee *e = GpayrollDatabase.GetEmployee(empId);
        EXPECT_TRUE(e != 0);
    }

    DeleteEmployeeTransaction dt(empId);
    dt.Execute();
    {
        Employee *e = GpayrollDatabase.GetEmployee(empId);
        EXPECT_TRUE(e == 0);
    }
}

