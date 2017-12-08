//
// Created by lngo9 on 12/8/2017.
//

#ifndef PAYROLL_UNIONAFFILIATION_H
#define PAYROLL_UNIONAFFILIATION_H


#include "ServiceCharge.h"
#include "Affliation.h"
#include <map>
using namespace std;
class UnionAffiliation : public Affliation {
public:
    virtual ~UnionAffiliation();
    UnionAffiliation(double amount);

    ServiceCharge *GetServiceCharge(int date);

    void AddServiceCharge(int date, double charge);

private:
    double itsAmount;
    map<int, ServiceCharge*> itsServiceCharges;
};


#endif //PAYROLL_UNIONAFFILIATION_H
