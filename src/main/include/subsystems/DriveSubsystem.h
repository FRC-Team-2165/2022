#include <frc/drive/MecanumDrive.h>
#include <rev/CANSparkMax.h>
#include <frc2/command/SubsystemBase.h>
#include <frc/SpeedController.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <frc/interfaces/Gyro.h>


class DriveSubsystem : public frc2::SubsystemBase {
    public:

    void drive(double xSpeed, double ySpeed, double zRotation, double gyro );

private:
    rev::CANSparkMax frontleft;
    rev::CANSparkMax backleft;
    rev::CANSparkMax frontright;
    rev::CANSparkMax backright;
    frc::MecanumDrive dTrain{frontleft, backleft, frontright, backright};
};
