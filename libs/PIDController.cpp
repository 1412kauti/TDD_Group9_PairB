#include "PIDController.hpp"

PIDController::PIDController(double kp, double ki, double kd)
    : kp_(kp), ki_(ki), kd_(kd), prevError_(0.0), integral_(0.0) {}

double PIDController::compute(double target, double actual) {
    double error = target - actual;
    integral_ += error;
    double derivative = error - prevError_;
    prevError_ = error;
    return kp_ * error + ki_ * integral_ + kd_ * derivative;
}
