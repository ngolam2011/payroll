//
// Created by lngo9 on 12/7/2017.
//

#include "SalesReceiptTransaction.h"
#include "../Employee.h"
#include "../Database/PayrollDatabase.h"
#include "../CommissionedClassification.h"

extern PayrollDatabase GpayrollDatabase;

SalesReceiptTransaction::SalesReceiptTransaction(long date, double amount, int empid)
    : itsDate(date)
    , itsAmount(amount)
    , itsEmpid(empid){}


SalesReceiptTransaction::~SalesReceiptTransaction() {}

void SalesReceiptTransaction::Execute() {
    Employee *e = GpayrollDatabase.GetEmployee(itsEmpid);

    if (e) {
        PaymentClassification *pc = e->GetClassification();
        if(CommissionedClassification *cc = dynamic_cast<CommissionedClassification*> (pc)) {
            cc->AddSalesReceipt(new SalesReceipt(itsDate, itsAmount));
        }

    }
}
