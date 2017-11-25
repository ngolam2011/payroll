include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicPayrollTests
        basic_check.cpp
        calendar_check.cpp)
target_link_libraries(runBasicPayrollTests gtest gtest_main)
target_link_libraries(runBasicPayrollTests gtest calendars)