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

SalesReceipt* CommissionedClassification::GetSalesReceipt(int date) {
    list<SalesReceipt*>::iterator it = itsSalesReceipt.begin();

    for (it; it != end(itsSalesReceipt); it++) {
        if ((*it)->GetDate() == date) {
            return (*it);
        }
    }

    return nullptr;
}

void CommissionedClassification::AddSalesReceipt(SalesReceipt *pReceipt) {
    itsSalesReceipt.push_back(pReceipt);
}
