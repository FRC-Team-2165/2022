#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/ClimberSubsystem.h"

class ToggleUpperLatchArmsCommand : public frc2::CommandHelper<frc2::CommandBase, ToggleUpperLatchArmsCommand> {
    public:
    ToggleUpperLatchArmsCommand(ClimberSubsystem* subsystem);

    void Initialize() override;

    bool IsFinished() override;

private:
ClimberSubsystem* subsystem;
};