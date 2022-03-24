#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/IntakeSubsystem.h"

class IntakeRollerForwardCommand : public frc2::CommandHelper<frc2::CommandBase, IntakeRollerForwardCommand> {
    public:
    IntakeRollerForwardCommand(IntakeSubsystem* subsystem);

    void Initialize() override;
    
    void End(bool) override;

private:
IntakeSubsystem* subsystem;
};