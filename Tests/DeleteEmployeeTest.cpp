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
#include "../PayRoll/Transactions/AddHourlyEmployee.h"
#include "../PayRoll/HourlyClassification.h"
#include "../PayRoll/Transactions/TimeCardTransaction.h"

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

TEST(Transaction, TimeCardTransaction) {
    cerr << "Test Time Card Transaction" << endl;
    int empId = 2;
    AddHourlyEmployee t(empId, "Bill", "Home", 12.25);
    t.Execute();
    TimeCardTransaction tct (200011031, 8.0, empId);
    tct.Execute();
    Employee *e = GpayrollDatabase.GetEmployee(empId);
    EXPECT_TRUE(e != 0);
    PaymentClassification *pc = e->GetClassification();
    HourlyClassification *hc = dynamic_cast<HourlyClassification*>(pc);
    EXPECT_TRUE(hc != 0);
    TimeCard *tc = hc->GetTimeCard(200011031);
    EXPECT_TRUE(tc != 0);
    EXPECT_EQ(8.0, tc->GetHours());
}

