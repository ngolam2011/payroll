cmake_minimum_required(VERSION 3.8)
project(PayRoll)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(Tests/lib/googletest)
include_directories(Tests/lib/googletest/googletest/include)
include_directories(Tests/lib/googletest/googlemock/include)


set(SOURCE_FILES main.cpp
        PayRoll/Transaction.cpp
        PayRoll/Transaction.h
        PayRoll/PayrollDatabase.cpp
        PayRoll/PayrollDatabase.h
        PayRoll/AddEmployeeTransaction.cpp
        PayRoll/AddEmployeeTransaction.h
        PayRoll/HoldMethod.cpp
        PayRoll/HoldMethod.h
        PayRoll/Employee.cpp
        PayRoll/Employee.h
        PayRoll/AddSalariedEmployee.cpp
        PayRoll/AddSalariedEmployee.h
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
        PayRoll/AddHourlyEmployee.cpp
        PayRoll/AddHourlyEmployee.h
        PayRoll/HourlyClassification.cpp
        PayRoll/HourlyClassification.h
        PayRoll/WeeklySchedule.cpp
        PayRoll/WeeklySchedule.h Tests/AddCommissionedEmployeeTest.cpp PayRoll/AddCommissionedEmployee.cpp PayRoll/AddCommissionedEmployee.h PayRoll/CommissionedClassification.cpp PayRoll/CommissionedClassification.h PayRoll/BiweeklySchedule.cpp PayRoll/BiweeklySchedule.h)
add_executable(PayRoll ${SOURCE_FILES})
target_link_libraries(PayRoll gtest gtest_main)