// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/IntakeRollerSubsystem.h"

IntakeRollerSubsystem::IntakeRollerSubsystem() {
    m_intakeRollerMotor.SetNeutralMode(
        ctre::phoenix6::signals::NeutralModeValue::Coast);
}

void IntakeRollerSubsystem::RunRoller() {
    m_intakeRollerMotor.Set(Constants::Intake::kIntakeRollerSpeed);
}

void IntakeRollerSubsystem::ReverseRoller() {
    m_intakeRollerMotor.Set(-Constants::Intake::kIntakeRollerSpeed);
}

void IntakeRollerSubsystem::StopRoller() {
    m_intakeRollerMotor.Set(0.0);
}

// This method will be called once per scheduler run
void IntakeRollerSubsystem::Periodic() {}
