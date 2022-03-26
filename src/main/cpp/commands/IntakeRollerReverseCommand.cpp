#include "commands/IntakeRollerReverseCommand.h"

IntakeRollerReverseCommand::IntakeRollerReverseCommand(IntakeSubsystem* subsystems) : subsystem(subsystem) {

 AddRequirements(subsystem);
}

void IntakeRollerReverseCommand::Initialize() {
    subsystem->reverseRoller();
}

void IntakeRollerReverseCommand::End(bool interrupted) {
    subsystem->stopRoller();
}