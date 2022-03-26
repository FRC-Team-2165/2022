#include <commands/DriveCommand.h>

DriveCommand::DriveCommand(DriveSubsystem* drive, frc::XboxController* controller) {

xboxController = controller;
driveSub = drive;
}
void DriveCommand::Execute() {
    driveSub->drive(xboxController->GetLeftX(), 
                    xboxController->GetLeftY(), 
                    xboxController->GetRightX());

}




