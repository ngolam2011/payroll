#include <gtest/gtest.h>
#include "../PayRoll/AddSalariedEmployee.h"
#include "../PayRoll/Employee.h"

class GregorianCalendar;

class PayrollTest : public ::testing::Test {
protected:
    virtual void TearDown() {
    }
    virtual void SetUp() {
    }

public:
    PayrollTest() : Test() {
        int emId = 1;
        AddSalariedEmployee t(emId, "Bod", "Home", 1000.00);
        t.Execute();




    }
    GregorianCalendar* gregorian_calendar;
};


TEST(PayrollTest, check_name_employee) {
    Employee* e = GpayrollDatabase.GetEmployee(1);
    EXPECT_EQ("Bob", e->GetName());
}


/*TEST_F(PayrollTest, check_classification) {
    Employee* e = GpayrollDatabase.GetEmployee(1);
    PaymentClassification* pc = e->GetClassification();
    SalariedClassification* sc = dynamic_cast<SalariedClassification*>(pc);
    ASSERT_TRUE(sc);
}


TEST_F(PayrollTest, check_hold_method) {
    Employee* e = GpayrollDatabase.GetEmployee(1);
    PaymentClassification* pc = e->GetClassification();
    SalariedClassification* sc = dynamic_cast<SalariedClassification*>(pc);

    EXPECT_DOUBLE_EQ(1000.00, sc->GetSalary());

    PaymentSchedule* ps = e->GetSchedule();
    MonthlySchedule* ms = dynamic_cast<MonthlySchedule*>(ps);
    ASSERT_TRUE(ms);

    PaymentMethod* pm = e->GetMethod();
    HoldMethod* hm = dynamic_cast<HoldMethod*>(pm);
    ASSERT_TRUE(hm);
}*/
