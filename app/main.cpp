#include "PIDController.hpp"
#include <iostream>

int main() {
    // Initialize the PID controller with tuning parameters (Kp, Ki, Kd)
    PIDController pid(1.0, 0.1, 0.01);

    // Simulate a control loop
    double targetVelocity = 20.0;  // The desired target velocity
    double actualVelocity = 0.0;  // The current actual velocity

    for (int i = 0; i < 100; ++i) {
        // Calculate the control output
        double controlOutput = pid.compute(targetVelocity, actualVelocity);

        // Simulate the system (e.g., adjust actual velocity based on the control output)
        actualVelocity += controlOutput * 0.01;  // Assuming a time step of 0.01 seconds

        std::cout << "Time: " << i * 0.01 << " seconds, Actual Velocity: " << actualVelocity << std::endl;
    }

    return 0;
}