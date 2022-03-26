#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/TransportSubsystem.h"

class ReverseTransportCommand : public frc2::CommandHelper<frc2::CommandBase, ReverseTransportCommand> {
 public:
 ReverseTransportCommand(TransportSubsystem* subsystem);

 void Execute() override;

 void End(bool) override;

private:
TransportSubsystem* subsystem;
};