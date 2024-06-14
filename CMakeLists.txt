cmake_minimum_required(VERSION 3.20)
project(myactuator_rh_test)

find_package(myactuator_rh REQUIRED)

add_executable(rh_get_test
  src/get_test.cpp
)
target_link_libraries(rh_get_test PUBLIC myactuator_rh::myactuator_rh)

add_executable(rh_position_test
  src/position_test.cpp
)

target_link_libraries(rh_position_test PUBLIC myactuator_rh::myactuator_rh)