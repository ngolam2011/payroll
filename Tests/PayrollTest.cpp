#include <gtest/gtest.h>
#include "../PayRoll/Transactions/AddSalariedEmployee.h"
#include "../PayRoll/Employee.h"
#include "../PayRoll/SalariedClassification.h"
#include "../PayRoll/MonthlySchedule.h"
#include "../PayRoll/HoldMethod.h"
#include "../PayRoll/Database/PayrollDatabase.h"


class PayrollTest : public ::testing::Test {
protected:
    virtual void TearDown() {
    }
    virtual void SetUp() {
        emId = 1;
        AddSalariedEmployee t(1, "Bob", "Home", 1000.00);
        t.Execute();

        e = GpayrollDatabase.GetEmployee(emId);
        pc = e->GetClassification();
        sc = dynamic_cast<SalariedClassification*> (pc);

        ps = e->GetSchedule();
        ms = dynamic_cast<MonthlySchedule*>(ps);

        pm = e->GetMethod();
        hm = dynamic_cast<HoldMethod*>(pm);


    }

public:
    PayrollTest() : Test() {
    }
    int emId;
    Employee *e;
    PaymentClassification *pc;
    SalariedClassification *sc;
    PaymentSchedule *ps;
    MonthlySchedule *ms;
    PaymentMethod *pm;
    HoldMethod *hm;
};

TEST_F(PayrollTest, GetNameOfEmployee) {
    EXPECT_EQ("Bob", e->GetName());
}

TEST_F(PayrollTest, GetClassification) {
    EXPECT_TRUE(sc != NULL);
}

TEST_F(PayrollTest, GetSalary) {
    EXPECT_EQ(1000.00, sc->GetSalary());
}

TEST_F(PayrollTest, GetSchedule) {
    EXPECT_TRUE(ms != NULL);
}

TEST_F(PayrollTest, GetMethod) {
    EXPECT_TRUE(hm != NULL);
}




