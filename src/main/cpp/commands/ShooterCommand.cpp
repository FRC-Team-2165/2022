#include <commands/ShooterCommand.h>

ShooterCommand::ShooterCommand(ShooterSubsystem* subsystem) : m_subsystem(subsystem) {
  
  AddRequirements(subsystem);
}

void ShooterCommand::Execute() {
  m_subsystem->enableFlywheel();
}
