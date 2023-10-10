/**
 * @file main.cpp
 * @author Kautilya Reddy Chappidi (kautilya97@gmail.com)
 * @brief Impementation of a PID Controller
 * This file containes the implementation of the PIDController Class
 * which is used to implement PID to a target velocity (target) with an
 * actual velocity (actual)
 *
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */

/**
 * @brief The main function of the program.
 * @details This function initializes a PID controller with tuning parameters and
 * simulates a control loop.
 * @return The program exit status.
 */
#include <iostream>

#include "PIDController.hpp"

int main() {
  // Initialize the PID controller with tuning parameters (Kp, Ki, Kd)
  PIDController pid(1.0, 0.1, 0.01);

  // Simulate a control loop
  double targetVelocity = 20.0;  // The desired target velocity
  double actualVelocity = 0.0;   // The current actual velocity

  for (int i = 0; i < 100; ++i) {
    // Calculate the control output
    double controlOutput = pid.compute(targetVelocity, actualVelocity);

    // Simulate the system (e.g., adjust actual velocity based on the control
    // output)
    actualVelocity +=
        controlOutput * 0.01;  // Assuming a time step of 0.01 seconds

    std::cout << "Time: " << i * 0.01
              << " seconds, Actual Velocity: " << actualVelocity << std::endl;
  }

  return 0;
}