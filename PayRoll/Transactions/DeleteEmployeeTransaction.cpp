//
// Created by lngo9 on 12/6/2017.
//

#include "DeleteEmployeeTransaction.h"
#include "AddEmployeeTransaction.h"
#include "../Database/PayrollDatabase.h"

DeleteEmployeeTransaction::~DeleteEmployeeTransaction() {}

DeleteEmployeeTransaction::DeleteEmployeeTransaction(int empId)
    :itsEmpId(empId){}

void DeleteEmployeeTransaction::Execute() {
    GpayrollDatabase.DeleteEmployee(itsEmpId);
}