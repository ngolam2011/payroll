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
#include "../PayRoll/Transactions/SalesReceiptTransaction.h"
#include "../PayRoll/CommissionedClassification.h"
#include "../PayRoll/SalesReceipt.h"
#include "../PayRoll/Transactions/ServiceChargeTransaction.h"
#include "../PayRoll/ServiceCharge.h"
#include "../PayRoll/UnionAffiliation.h"

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

TEST(Transaction, SalesReceiptTransaction) {
    cerr << "Test Sale Receipt Transaction" << endl;
    int empId = 3;
    AddCommissionedEmployee t(empId, "Ngo Lam", "VietNam", 1000.00, 8.0);
    t.Execute();

    SalesReceiptTransaction srt(200011031, 87.00, empId);
    srt.Execute();

    Employee *e = GpayrollDatabase.GetEmployee(empId);
    EXPECT_TRUE(e != 0);

    PaymentClassification *pc = e->GetClassification();
    CommissionedClassification *cc = dynamic_cast<CommissionedClassification*>(pc);
    EXPECT_TRUE(cc != 0);

    SalesReceipt *sr = cc->GetSalesReceipt(200011031);

    EXPECT_TRUE(sr != 0);

    EXPECT_EQ(87.00, sr->GetAmount());

}

TEST(Transaction, AddServiceCharge) {
    cerr << "Test Add Service Charge" << endl;
    int empId = 4;
    AddHourlyEmployee t(empId, "Bill", "Home", 15.25);
    t.Execute();

    Employee *e = GpayrollDatabase.GetEmployee(empId);

    EXPECT_TRUE(e != 0);

    UnionAffiliation *af = new UnionAffiliation(12.5);
    e->SetAffiliation(af);

    int memberId = 86;
    GpayrollDatabase.AddUnionMember(memberId, e);

    ServiceChargeTransaction sct(memberId, 20011101, 12.95);
    sct.Execute();

    ServiceCharge* sc = af->GetServiceCharge(20011101);

    EXPECT_TRUE(sc != 0);

    EXPECT_EQ(12.95, sc->GetAmount());
}

