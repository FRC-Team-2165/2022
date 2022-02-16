#pragma once   

#include <frc2/command/SubsystemBase.h>
#include <frc/DoubleSolenoid.h>
#include <ctre/Phoenix.h>

class IntakeSubsystem : public frc2::SubsystemBase {
    public :
    IntakeSubsystem();  

    void extend();
    void retract();
    void toggle();

    void setspeed();

    bool position();

private:
    frc::DoubleSolenoid intakeSolenoid{frc::PneumaticsModuleType::CTREPCM, 0, 1};
    ctre::phoenix::motorcontrol::can::WPI_TalonSRX intakeMotor{0};
    bool state;
};