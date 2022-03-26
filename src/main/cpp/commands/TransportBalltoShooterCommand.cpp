#include "commands/TransportBallToShooterCommand.h"

TransportBallToShooterCommand::TransportBallToShooterCommand(TransportSubsystem* subsystem) : subsystem(subsystem) {
    AddRequirements(subsystem);
}

void TransportBallToShooterCommand::Initialize() {
    subsystem->enableInnerBelt();
    subsystem->enableOuterBelt();
}

void TransportBallToShooterCommand::Execute() {

}

void TransportBallToShooterCommand::End(bool interrupted) {

}

bool TransportBallToShooterCommand::IsFinished() {

}