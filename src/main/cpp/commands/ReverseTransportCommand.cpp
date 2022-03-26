#include "commands/ReverseTransportCommand.h"

ReverseTransportCommand::ReverseTransportCommand(TransportSubsystem* subsystem) : subsystem(subsystem) {
    
AddRequirements(subsystem);

}
void ReverseTransportCommand::Execute() {
        subsystem->reverseInnerBelt();
        subsystem->reverseOuterBelt();
    }

void ReverseTransportCommand::End(bool interrupted) {
    subsystem->disableInnerBelt();
    subsystem->disableOuterBelt();
}