//
// Created by lngo9 on 12/4/2017.
//

#include "AddHourlyEmployee.h"
#include "HourlyClassification.h"
#include "WeeklySchedule.h"

AddHourlyEmployee::AddHourlyEmployee(int empid, const string &name, const string &address, double hourlyRate)
        : AddEmployeeTransaction(empid, name, address)
        , itshourlyRate(hourlyRate) {}

PaymentClassification *AddHourlyEmployee::GetClassification() const {
    return new HourlyClassification(itshourlyRate);
}

PaymentSchedule *AddHourlyEmployee::GetSchedule() const {
    return new WeeklySchedule();
}
