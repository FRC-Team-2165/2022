#pragma once     

#include <frc2/command/SubsystemBase.h>
#include <frc/DoubleSolenoid.h>

class ClimbSubsystem : public frc2::SubsystemBase {
public: 
    ClimbSubsystem();

    void extendBottom();
    void extendTop();
    void retractBottom();
    void retractTop();
    

private:
    bool state;
    frc::DoubleSolenoid bottomClimbSolenoid{frc::PneumaticsModuleType::CTREPCM, 1, 0};
    frc::DoubleSolenoid topClimbSolenoid{frc::PneumaticsModuleType::CTREPCM, 3, 2};

};
