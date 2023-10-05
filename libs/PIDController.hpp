/**
 * @file PIDController.hpp
 * @author Kautilya Reddy Chappidi (kautilya97@gmail.com)
 * @brief Defines the declaration PIDController class.
 * 
 * This file containes the decleration of the PIDController Class
 * which is used to implement PID to a target velocity (target) with an
 * actual velocity (actual)
 * 
 * @version 0.1
 * @date 2023-10-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef PIDCONTROLLER_HPP
#define PIDCONTROLLER_HPP
/**
 * @class PIDController
 * @brief PID Controller
 * 
 * Stands for Proportional-Integral-Derivative Controller.
 * 
 * The PIDController class implements a PID controller with user-defined
 * values for the proportional (Kp), Integral (Ki), and Derivative (Kd) terms
 */

class PIDController {
public:
    /**
     * @brief Construct a new PIDController object
     * 
     * @param kp The proportional Co-efficient
     * @param ki The Integral Co-efficient
     * @param kd The derivative coefficient
     */
    PIDController(double kp, double ki, double kd);
    /**
     * @brief Compute the control output of the PID controller
     * 
     * Given a target setpoint (target) and the actual process value(actual),
     * this function calculates the control output using the PID function
     * 
     * @param target The desired setpoint or target value
     * @param actual The current process value or feedback
     * @return double The computed control output
     */
    double compute(double target, double actual);

private:
    double kp_; ///< The proportional coefficient
    double ki_; ///< The integral coefficient
    double kd_; ///< The derivative coefficient
    double prevError_;  ///< The previous error for derivative calculation
    double integral_;   ///< The integral of the error for integral calculation
};

#endif PIDCONTROLLER_HPP 