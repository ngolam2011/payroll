//
// Created by lngo9 on 12/7/2017.
//

#ifndef PAYROLL_SERVICECHARGE_H
#define PAYROLL_SERVICECHARGE_H


class ServiceCharge {
public:
    virtual ~ServiceCharge();
    ServiceCharge(double amount);
    double GetAmount();

private:
    double itsAmount;
};


#endif //PAYROLL_SERVICECHARGE_H
