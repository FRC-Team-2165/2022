#pragma once

#include "subsystems/TransportSubsystem.h"
#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include <frc/Timer.h>

class AutoBallTransfer: public frc2::CommandHelper<frc2::CommandBase, AutoBallTransfer> { 
public:

frc::Timer timer;
AutoBallTransfer(TransportSubsystem* subsystem);

void Execute() override;

void Initialize() override;


private:
TransportSubsystem* transub;

};