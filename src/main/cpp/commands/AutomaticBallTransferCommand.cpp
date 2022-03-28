#include "commands/AutomaticBallTransferCommand.h"

AutoBallTransfer::AutoBallTransfer(TransportSubsystem* subsystem) {

transub = subsystem;
}

void AutoBallTransfer::Execute() {
    transub->enableInnerBelt();

}

void AutoBallTransfer::Initialize() {
    transub->
}

