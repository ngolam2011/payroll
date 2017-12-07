//
// Created by lngo9 on 12/6/2017.
//

#ifndef PAYROLL_TIMECARD_H
#define PAYROLL_TIMECARD_H


class TimeCard {
public:
    virtual ~TimeCard();
    TimeCard(long date, double hours);
    long GetDate() {return itsDate;}
    long GetHours() {return itsHours;}

private:
    long itsDate;
    double itsHours;
};


#endif //PAYROLL_TIMECARD_H
