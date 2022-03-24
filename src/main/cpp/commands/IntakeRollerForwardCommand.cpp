#include "commands/IntakeRollerForwardCommand.h"

IntakeRollerForwardCommand::IntakeRollerForwardCommand(IntakeSubsystem* subsystem) : subsystem(subsystem) {

    AddRequirements(subsystem);
}

void IntakeRollerForwardCommand::Initialize() {
    subsystem->startRoller();

}

void IntakeRollerForwardCommand::End(bool interrupted) {
    subsystem->stopRoller();

}