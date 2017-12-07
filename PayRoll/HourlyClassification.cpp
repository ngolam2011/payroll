//
// Created by lngo9 on 12/4/2017.
//

#include "HourlyClassification.h"

HourlyClassification::HourlyClassification(double d)
    : itsHourlyRate(d){}

double HourlyClassification::GetHourlyRate() {
    return itsHourlyRate;
}

void HourlyClassification::AddTimeCard(TimeCard *pCard) {
   itsTimeCards.push_back(pCard);
}

TimeCard *HourlyClassification::GetTimeCard(int date) {
    list<TimeCard*>::iterator it = itsTimeCards.begin();
    for(it; it != end(itsTimeCards); it++) {
        if ((*it)->GetDate() == date)
            return *it;
    }
    return nullptr;
}
