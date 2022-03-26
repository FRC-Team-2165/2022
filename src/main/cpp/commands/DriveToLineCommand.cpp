#include <commands/DriveToLineCommand.h>

DriveToLineCommand::DriveToLineCommand(DriveSubsystem* drive, bool _backward) :drivesub(drive), backward(_backward)  {
AddRequirements(drive); 
}
void DriveToLineCommand::Execute() {

    if(backward) {

        drivesub->drive(0, -0.6, 0); 
    }
    else {
        
        drivesub->drive(0, 0.6, 0);
    }
}
void DriveToLineCommand::End(bool interrupted) {
    drivesub->drive(0, 0, 0);

}
bool DriveToLineCommand::IsFinished() {

   return drivesub->seesLine();
}