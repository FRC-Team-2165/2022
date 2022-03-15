#include "subsystems/ClimbSubsystem.h"

ClimbSubsystem::ClimbSubsystem() {
    retractTop();
    retractBottom();
}

void ClimbSubsystem::extendBottom() {
    bottomClimbSolenoid.Set(frc::DoubleSolenoid::Value::kForward);
}

void ClimbSubsystem::extendTop() {
    topClimbSolenoid.Set(frc::DoubleSolenoid::Value::kForward);
}

void ClimbSubsystem::retractBottom() {
    bottomClimbSolenoid.Set(frc::DoubleSolenoid::Value::kReverse);
}

void ClimbSubsystem::retractTop() {
    topClimbSolenoid.Set(frc::DoubleSolenoid::Value::kReverse);
}