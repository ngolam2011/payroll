//
// Created by lngo9 on 11/24/2017.
//

#include "PayrollTest.h"
#include <cassert>

void PayrollTest::TestAddSalariedEmployee()
{
    int emId = 1;
    AddSalariedEmployee t(empId, "Bod", "Home", 1000.00);
    t.Execute();

    Employee* e = GpayrollDatabase.GetEmployee(emId);
    assert("Bob" == e->GetName());

    PaymentClassification* pc = e->GetClassification();
    SalariedClassification* sc = dynamic_cast<SalariedClassification*>(pc);
    assert(sc);

    assertEquals(1000.00, sc->GetSalary(), .001);
    PaymentSchedule* ps = e->GetSchedule();
    MonthlySchedule* ms = dynamic_cast<MonthlySchedule*>(ps);
    assert(ms);
    PaymentMethod* pm = e->GetMethod();
    HoldMethod* hm = dynamic_cast<HoldMethod*>(pm);
    assert(hm);

}

