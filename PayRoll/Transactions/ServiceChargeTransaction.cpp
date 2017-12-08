//
// Created by lngo9 on 12/7/2017.
//

#include "ServiceChargeTransaction.h"
#include "../Database/PayrollDatabase.h"
#include "../Affliation.h"
#include "../Employee.h"

extern PayrollDatabase GpayrollDatabase;

ServiceChargeTransaction::~ServiceChargeTransaction() {}

ServiceChargeTransaction::
ServiceChargeTransaction(int memberId, long date, double charge)
    : itsMemberId(memberId)
    , itsDate(date)
    , itsCharge(charge){}

void ServiceChargeTransaction::Execute() {
    Employee *e = GpayrollDatabase.GetUnionMember(itsMemberId);
    Affliation *af = e->GetAffiliation();
    if (UnionAffiliation *uaf = dynamic_cast<UnionAffiliation*>(af)) {
        uaf->AddServiceCharge(itsDate, itsCharge);
    }
}
