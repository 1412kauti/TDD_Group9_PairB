class PIDController {
public:
    PIDController(double kp, double ki, double kd);
    double compute(double target, double actual);

private:
    double kp_;
    double ki_;
    double kd_;
    double prevError_;
    double integral_;
};