#include "commands/LowerClimbingArmsCommand.h"

LowerClimbingArmsCommand::LowerClimbingArmsCommand(ClimberSubsystem* subsystem) : subsystem(subsystem) {
    AddRequirements(subsystem);
}

void LowerClimbingArmsCommand::Initialize() {
    subsystem->toggleLower();
}

