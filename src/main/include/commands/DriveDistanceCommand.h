#pragma once 

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/DriveSubsytem.h"

class DriveDistanceCommand
: public frc2::CommandHelper<frc2::CommandBase, DriveDistanceCommand> {
public:


    void Initialize();

    bool IsFinished();

    void End(bool);

    void Execute();

    DriveDistanceCommand(DriveSubsystem* subsystem, bool backward, double distance);
    
    private:
    DriveSubsystem* m_subsytem; 
    bool backward;
    double distance;
};