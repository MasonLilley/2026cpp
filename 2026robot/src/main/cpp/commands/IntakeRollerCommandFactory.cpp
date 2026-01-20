#include <commands/IntakeRollerCommandFactory.h>
#include <frc2/command/Commands.h>

IntakeRollerCommandFactory::IntakeRollerCommandFactory(IntakeRollerSubsystem* intakeRollerSubsystem) : 
    m_intakeRollerSubsystem{intakeRollerSubsystem} {}

frc2::CommandPtr IntakeRollerCommandFactory::RunIntakeRollerCommand() {
    return frc2::cmd::StartEnd(
        [this] { m_intakeRollerSubsystem -> RunRoller(); },
        [this] { m_intakeRollerSubsystem -> StopRoller(); },
        {m_intakeRollerSubsystem}
    );
}