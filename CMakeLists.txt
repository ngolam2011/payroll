cmake_minimum_required(VERSION 3.8)
project(PayRoll)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Transaction.cpp Transaction.h PayrollTest.cpp PayrollTest.h PayrollDatabase.cpp PayrollDatabase.h AddEmployeeTransaction.cpp AddEmployeeTransaction.h HoldMethod.cpp HoldMethod.h Employee.cpp Employee.h AddSalariedEmployee.cpp AddSalariedEmployee.h)
add_executable(PayRoll ${SOURCE_FILES})