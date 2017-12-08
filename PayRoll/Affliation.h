//
// Created by lngo9 on 12/7/2017.
//

#ifndef PAYROLL_AFFLIATION_H
#define PAYROLL_AFFLIATION_H

#include <list>
#include "ServiceCharge.h"

using namespace std;

class Affliation {
public:
    virtual ~Affliation();

private:
    list<ServiceCharge*> itsServiceCharges;
};


#endif //PAYROLL_AFFLIATION_H
