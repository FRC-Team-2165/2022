#pragma once

#include "Constants.h"

#include <frc2/command/SubsystemBase.h>
#include <frc/DoubleSolenoid.h>
#include <frc/DigitalInput.h>

class ClimberSubsystem : public frc2::SubsystemBase {
public:
    ClimberSubsystem();
    ~ClimberSubsystem() noexcept {}

    void extendLower();
    void retractLower();
    void toggleLower();
    bool isRetracted();

    void extendUpper(bool requireSafe = false);
    void retractUpper(bool requireSafe = false);
    void toggleUpper(bool requireSafe = false);

    bool isUpperFired();
    void resetFiring();
private:
    bool upperFired;

    frc::DigitalInput liftSwitchRight{2};
    frc::DigitalInput liftSwitchLeft{5};

    frc::DoubleSolenoid lowerArms{frc::PneumaticsModuleType::CTREPCM, 0, 7};
    frc::DoubleSolenoid upperArms{frc::PneumaticsModuleType::CTREPCM, 6, 1};
};
