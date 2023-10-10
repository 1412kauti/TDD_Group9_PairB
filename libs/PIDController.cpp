/**
 * @file PIDController.cpp
 * @author Kautilya Reddy Chappidi (kautilya97@gmail.com)
 * @brief Compute method of the PIDController class.
 *
 * This file containes the coompute method of the PIDController Class
 * which is used to implement PID to a target velocity (target) with an
 * actual velocity (actual)
 *
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "PIDController.hpp"
/**
 * @brief Constructor for the PIDController class.
 * @param kp The proportional gain.
 * @param ki The integral gain.
 * @param kd The derivative gain.
 */
PIDController::PIDController(double kp, double ki, double kd)
    : kp_(kp), ki_(ki), kd_(kd), prevError_(0.0), integral_(0.0) {}
/**
 * @brief Computes the control output based on the error between the target and
 * actual values.
 * @param target The desired target value.
 * @param actual The current actual value.
 * @return The computed control output.
 */
double PIDController::compute(double target, double actual) {
  double error = target - actual;
  integral_ += error;
  double derivative = error - prevError_;
  prevError_ = error;
  return kp_ * error + ki_ * integral_ + kd_ * derivative;
}
