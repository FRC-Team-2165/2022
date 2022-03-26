#include "commands/IntakeArmToggleCommand.h"

IntakeArmToggleCommand::IntakeArmToggleCommand(IntakeSubsystem* subsystem) : subsystem(subsystem) {
    AddRequirements(subsystem);
}

void IntakeArmToggleCommand::Initialize() {
    intake->toggleArm();
}

bool IntakeArmToggleCommand::IsFinished() {
    return true;
}