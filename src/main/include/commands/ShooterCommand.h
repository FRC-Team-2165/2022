#pragma once 

#include <subsystems/ShooterSubsystem.h>
#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

class ShooterCommand
    : public frc2::CommandHelper<frc2::CommandBase, ShooterCommand> {
        public:

        void Execute();
        
        explicit ShooterCommand(ShooterSubsystem* subsystem);

        private:
        ShooterSubsystem* m_subsystem;
        
        
        
    };
 