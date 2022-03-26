#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/TransportSubsystem.h"

class TransportBallToShooterCommand : public frc2::CommandHelper<frc2::CommandBase, TransportBallToShooterCommand> {
    public:
TransportBallToShooterCommand(TransportSubsystem* subsystem);
  
    void Initialize() override;

    void Execute() override;

    void End(bool) override;

    bool IsFinished() override;

private:
TransportSubsystem* subsystem;

};