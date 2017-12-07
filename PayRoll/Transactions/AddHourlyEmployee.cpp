//
// Created by lngo9 on 12/4/2017.
//

#include "AddHourlyEmployee.h"
#include "../HourlyClassification.h"
#include "../WeeklySchedule.h"

AddHourlyEmployee::AddHourlyEmployee(int empId, const string &name, const string &address, double hourlyRate)
        : AddEmployeeTransaction(empId, name, address)
        , itsHourlyRate(hourlyRate) {}

PaymentClassification *AddHourlyEmployee::GetClassification() const {
    return new HourlyClassification(itsHourlyRate);
}

PaymentSchedule *AddHourlyEmployee::GetSchedule() const {
    return new WeeklySchedule();
}
