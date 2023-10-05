add_library(PIDController PIDController.cpp PIDController.hpp)
target_include_directories(PIDController PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
