//
// Created by lngo9 on 12/4/2017.
//

#include "gtest/gtest.h"
#include "../PayRoll/AddEmployeeTransaction.h"
#include "../PayRoll/HourlyClassification.h"
#include "../PayRoll/AddHourlyEmployee.h"
#include "../PayRoll/PayrollDatabase.h"
#include "../PayRoll/WeeklySchedule.h"
#include "../PayRoll/Employee.h"
#include "../PayRoll/HoldMethod.h"

class AddHourlyEmployeeTest : public ::testing::Test {

protected:
    virtual void SetUp() {
        emId = 2;
        AddHourlyEmployee t(2, "Bob", "Home", 50.00);
        t.Execute();

        e = GpayrollDatabase.GetEmployee(emId);
        pc = e->GetClassification();
        hc = dynamic_cast<HourlyClassification*> (pc);

        ps = e->GetSchedule();
        ws = dynamic_cast<WeeklySchedule*>(ps);

        pm = e->GetMethod();
        hm = dynamic_cast<HoldMethod*>(pm);
    }
public:
    AddHourlyEmployeeTest() : Test() {
    }
    int emId;
    Employee *e;
    PaymentClassification *pc;
    HourlyClassification *hc;
    PaymentSchedule *ps;
    WeeklySchedule *ws;
    PaymentMethod *pm;
    HoldMethod *hm;
};

TEST_F(AddHourlyEmployeeTest, GetNameOfEmployee) {
    EXPECT_EQ("Bob", e->GetName());
}

TEST_F(AddHourlyEmployeeTest, GetClassification) {
    EXPECT_TRUE(hc != NULL);
}

TEST_F(AddHourlyEmployeeTest, GetHourlyRate) {
    EXPECT_EQ(50.00, hc->GetHourlyRate());
}

TEST_F(AddHourlyEmployeeTest, GetSchedule) {
    EXPECT_TRUE(ws != NULL);
}

TEST_F(AddHourlyEmployeeTest, GetMethod) {
    EXPECT_TRUE(hm != NULL);
}

