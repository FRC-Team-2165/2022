#include <subsystems/IntakeSubsystem.h>

IntakeSubsystem::IntakeSubsystem() {
    retract();
    
}

void IntakeSubsystem::extend() {
    intakeSolenoid.Set(frc::DoubleSolenoid::Value::kForward);

}
void IntakeSubsystem::retract() {
    intakeSolenoid.Set(frc::DoubleSolenoid::Value::kReverse);
  
}

void IntakeSubsystem::toggle() {
    intakeSolenoid.Toggle();
}

void IntakeSubsystem::startMotor() {
    intakeMotor.Set(0.6);
}

void IntakeSubsystem::stopMotor() {
    intakeMotor.Set(0);
}

void IntakeSubsystem::reverseMotor() {
    intakeMotor.Set(-0.6);
}