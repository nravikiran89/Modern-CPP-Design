cmake_minimum_required(VERSION 3.0.0)
project(Templates_cpp VERSION 0.1.0)

# include(CTest)
# find_package(GTest REQUIRED)
# enable_testing()
# include_directories(${GTEST_INCLUDE_DIRS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_executable(templates_test main.cpp)
arget_link_libraries(templates_test gtest gtest_main pthread)