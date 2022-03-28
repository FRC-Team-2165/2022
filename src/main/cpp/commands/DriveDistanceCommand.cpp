#include <commands/DriveDistanceCommand.h>

DriveDistanceCommand::DriveDistanceCommand(DriveSubsystem* subsystem, bool backward, double distance) {
    AddRequirements(subsystem);

}

void DriveDistanceCommand::Initialize() {
    m_subsytem->resetDistance();
}
bool DriveDistanceCommand::IsFinished() {

    if(backward) {

        return m_subsytem->distance() < -distance;
        

    }
    
}

void DriveDistanceCommand::End(bool interrupted) {


}

void DriveDistanceCommand::Execute() {


}