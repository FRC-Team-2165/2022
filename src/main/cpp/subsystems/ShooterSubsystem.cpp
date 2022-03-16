#include "subsystems/ShooterSubsystem.h"

ShooterSubsystem::ShooterSubsystem() : ShooterSubsystem(3500) {}

ShooterSubsystem::ShooterSubsystem(double rpm) :flywheelRPM(rpm) {
    flywheelPID.SetP(7e-5);
    flywheelPID.SetI(5e-7);
    // flywheelPID.SetD(0);
    flywheelPID.SetFF(1e-5);
    disableFlywheel();
}

void ShooterSubsystem::enableFlywheel() {
    flywheelPID.SetReference(flywheelRPM, rev::CANSparkMax::ControlType::kVelocity);
}

void ShooterSubsystem::disableFlywheel() {
    flywheelPID.SetReference(0, rev::CANSparkMax::ControlType::kVelocity);
}


void ShooterSubsystem::setSpeed(double rpm) { 
    flywheelRPM = rpm;
    flywheelPID.SetReference(rpm, rev::CANSparkMax::ControlType::kVelocity);
}

void ShooterSubsystem::resetSpeed() {
    setSpeed(3500);
}

double ShooterSubsystem::getSpeed() {
    return flywheelRPM;
}

double ShooterSubsystem::getRealSpeed() {
    return flywheel.GetEncoder().GetVelocity();
}
