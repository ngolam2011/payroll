//
// Created by lngo9 on 12/7/2017.
//

#include "ServiceCharge.h"
ServiceCharge::ServiceCharge(double amount)
    : itsAmount(amount){}

double ServiceCharge::GetAmount() {
    return itsAmount;
}

ServiceCharge::~ServiceCharge() {}
