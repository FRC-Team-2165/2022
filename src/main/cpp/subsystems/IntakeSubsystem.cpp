#include <subsystems/IntakeSubsystem.h>

IntakeSubsystem::IntakeSubsystem() {
    retract();
    
}

void IntakeSubsystem::extend() {
    intakeSolenoid.Set(frc::DoubleSolenoid::Value::kForward);
    state = true;
}
void IntakeSubsystem::extend() {
    intakeSolenoid.Set(frc::DoubleSolenoid::Value::kReverse);
    state = false;
}
