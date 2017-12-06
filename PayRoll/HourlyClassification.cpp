//
// Created by lngo9 on 12/4/2017.
//

#include "HourlyClassification.h"

HourlyClassification::HourlyClassification(double d)
    : itsHourlyRate(d){}

double HourlyClassification::GetHourlyRate() {
    return itsHourlyRate;
}
