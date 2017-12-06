//
// Created by lngo9 on 12/6/2017.
//

#include "CommissionedClassification.h"

CommissionedClassification::CommissionedClassification(double salary, double commissionRate)
    : itsSalary(salary)
    , itsCommissionRate(commissionRate){

}

double CommissionedClassification::GetSalary() {
    return itsSalary;
}

double CommissionedClassification::GetCommissionRate() {
    itsCommissionRate;
}
