#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/ClimberSubsystem.h"

class LowerClimbingArmsCommand : public frc2::CommandHelper<frc2::CommandBase, LowerClimbingArmsCommand> {
    public:
    LowerClimbingArmsCommand(ClimberSubsystem* susystem);

    void Initialize() override;

    bool IsFinished() {
        return true;
    } 

private:
ClimberSubsystem* subsystem;

};