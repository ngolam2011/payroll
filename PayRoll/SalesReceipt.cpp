//
// Created by lngo9 on 12/7/2017.
//

#include "SalesReceipt.h"

SalesReceipt::~SalesReceipt() {}

SalesReceipt::SalesReceipt(int date, double amount)
    : itsDate(date)
    , itsAmount(amount){}

double SalesReceipt::GetAmount() {
    return itsAmount;
}

int SalesReceipt::GetDate() {
    return itsDate;
}
