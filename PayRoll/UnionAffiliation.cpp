//
// Created by lngo9 on 12/8/2017.
//

#include "UnionAffiliation.h"

UnionAffiliation::~UnionAffiliation() {}

UnionAffiliation::UnionAffiliation(double amount)
    : itsAmount(amount){}

ServiceCharge* UnionAffiliation::GetServiceCharge(int date) {
    auto it = itsServiceCharges.find(date);
    return it->second;
}

void UnionAffiliation::AddServiceCharge(int date, double charge) {
   itsServiceCharges.insert(std::make_pair(date, new ServiceCharge(charge)));
}
