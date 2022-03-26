#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/IntakeSubsystem.h"

class IntakeRollerReverseCommand : public frc2::CommandHelper<frc2::CommandBase, IntakeRollerReverseCommand> {
public:
    IntakeRollerReverseCommand(IntakeSubsystem* subsystem);

    void Initialize () override;

    void End (bool) override;

private:
IntakeSubsystem* subsystem;
};