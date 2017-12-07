cmake_minimum_required(VERSION 3.8)
project(PayRoll)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(Tests/lib/googletest)
include_directories(Tests/lib/googletest/googletest/include)
include_directories(Tests/lib/googletest/googlemock/include)


set(SOURCE_FILES main.cpp
        PayRoll/Transactions/Transaction.cpp
        PayRoll/Transactions/Transaction.h
        PayRoll/Database/PayrollDatabase.cpp
        PayRoll/Database/PayrollDatabase.h
        PayRoll/Transactions/AddEmployeeTransaction.cpp
        PayRoll/Transactions/AddEmployeeTransaction.h
        PayRoll/HoldMethod.cpp
        PayRoll/HoldMethod.h
        PayRoll/Employee.cpp
        PayRoll/Employee.h
        PayRoll/Transactions/AddSalariedEmployee.cpp
        PayRoll/Transactions/AddSalariedEmployee.h
        PayRoll/SalariedClassification.cpp
        PayRoll/SalariedClassification.h
        PayRoll/MonthlySchedule.cpp
        PayRoll/MonthlySchedule.h
        Tests/PayrollTest.cpp
        PayRoll/PaymentMethod.cpp
        PayRoll/PaymentMethod.h
        PayRoll/PaymentClassification.cpp
        PayRoll/PaymentClassification.h
        PayRoll/PaymentSchedule.cpp
        PayRoll/PaymentSchedule.h
        Tests/AddHourlyEmployeeTest.cpp
        PayRoll/Transactions/AddHourlyEmployee.cpp
        PayRoll/Transactions/AddHourlyEmployee.h
        PayRoll/HourlyClassification.cpp
        PayRoll/HourlyClassification.h
        PayRoll/WeeklySchedule.cpp
        PayRoll/WeeklySchedule.h Tests/AddCommissionedEmployeeTest.cpp PayRoll/Transactions/AddCommissionedEmployee.cpp PayRoll/Transactions/AddCommissionedEmployee.h PayRoll/CommissionedClassification.cpp PayRoll/CommissionedClassification.h PayRoll/BiweeklySchedule.cpp PayRoll/BiweeklySchedule.h Tests/DeleteEmployeeTest.cpp PayRoll/Transactions/DeleteEmployeeTransaction.cpp PayRoll/Transactions/DeleteEmployeeTransaction.h PayRoll/Transactions/TimeCardTransaction.cpp PayRoll/Transactions/TimeCardTransaction.h PayRoll/TimeCard.cpp PayRoll/TimeCard.h)
add_executable(PayRoll ${SOURCE_FILES})
target_link_libraries(PayRoll gtest gtest_main)