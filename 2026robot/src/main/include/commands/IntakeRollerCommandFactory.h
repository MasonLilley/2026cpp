#pragma once

#include <frc2/command/CommandPtr.h>
#include <subsystems/IntakeRollerSubsystem.h>

class IntakeRollerCommandFactory {
    public:
        explicit IntakeRollerCommandFactory(IntakeRollerSubsystem* intakeRollerSubsystem) : m_intakeRollerSubsystem(intakeRollerSubsystem) {}
        frc2::CommandPtr RunIntakeRollerCommand();
        frc2::CommandPtr ReverseIntakeRollerCommand();
        frc2::CommandPtr StopIntakeRollerCommand();
    private:
        IntakeRollerSubsystem* m_intakeRollerSubsystem;
};