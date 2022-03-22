#pragma once 
#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/DriveSubsytem.h"
#include <frc/XboxController.h>


class DriveCommand: public frc2::CommandHelper<frc2::CommandBase, DriveCommand> { 
public:

frc::XboxController* xboxController;
DriveCommand(DriveSubsystem* drive, frc::XboxController* controller);

void Execute() override;

private:
DriveSubsystem* driveSub;
};

