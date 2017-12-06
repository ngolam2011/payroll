//
// Created by lngo9 on 12/6/2017.
//

#include <gtest/gtest.h>
#include "../PayRoll/AddCommissionedEmployee.h"
#include "../PayRoll/PayrollDatabase.h"
#include "../PayRoll/Employee.h"
#include "../PayRoll/BiweeklySchedule.h"
#include "../PayRoll/CommissionedClassification.h"
#include "../PayRoll/HoldMethod.h"

class AddCommissionedEmployeeTest : public testing::Test {

protected:
    virtual void SetUp() {
        emId = 3;
        AddCommissionedEmployee t(3, "Bob", "Home", 1000.00, 50.00);
        t.Execute();

        e = GpayrollDatabase.GetEmployee(emId);
        pc = e->GetClassification();
        cc = dynamic_cast<CommissionedClassification*> (pc);

        cs = e->GetSchedule();
        bs = dynamic_cast<BiweeklySchedule*>(cs);

        pm = e->GetMethod();
        hm = dynamic_cast<HoldMethod*>(pm);
    }

public:
    int emId;
    Employee *e;
    PaymentClassification *pc;
    CommissionedClassification *cc;
    PaymentSchedule *cs;
    BiweeklySchedule *bs;
    PaymentMethod *pm;
    HoldMethod *hm;

};

TEST_F(AddCommissionedEmployeeTest, GetNameOfEmployee) {
    EXPECT_EQ("Bob", e->GetName());
}

TEST_F(AddCommissionedEmployeeTest, GetClassification) {
    EXPECT_TRUE(cc != NULL);
}

TEST_F(AddCommissionedEmployeeTest, GetSalary) {
    EXPECT_EQ(1000.00, cc->GetSalary());
}

TEST_F(AddCommissionedEmployeeTest, GetSchedule) {
    EXPECT_TRUE(bs != NULL);
}

TEST_F(AddCommissionedEmployeeTest, GetCommissionRate) {
    EXPECT_EQ(50.00, cc->GetCommissionRate());
}

TEST_F(AddCommissionedEmployeeTest, GetMethod) {
    EXPECT_TRUE(hm != NULL);
}