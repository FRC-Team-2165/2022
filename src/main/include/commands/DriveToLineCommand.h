#pragma once 

#include "subsystems/DriveSubsytem.h"
#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

class DriveToLineCommand: public frc2::CommandHelper<frc2::CommandBase, DriveToLineCommand> {
public:

DriveToLineCommand(DriveSubsystem* drive, bool backward);

void Execute();
void End(bool interrupted);
bool IsFinished();

private:
DriveSubsystem* drivesub;
bool backward;
};