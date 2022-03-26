#include "commands/ToggleUpperLatchArmsCommand.h"

ToggleUpperLatchArmsCommand::ToggleUpperLatchArmsCommand(ClimberSubsystem* subsystem) : subsystem(subsystem) {

AddRequirements(subsystem);
}

void ToggleUpperLatchArmsCommand::Initialize() {
    subsystem->toggleUpper();
}
bool ToggleUpperLatchArmsCommand::IsFinished() {
    return true;
}
