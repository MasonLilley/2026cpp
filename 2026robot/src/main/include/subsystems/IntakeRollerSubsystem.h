// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/phoenix6/TalonFX.hpp>
#include "Constants.h"

using namespace ctre::phoenix6;

class IntakeRollerSubsystem : public frc2::SubsystemBase {
 public:
  IntakeRollerSubsystem();
  void RunRoller();
  void ReverseRoller();
  void StopRoller();
  void Periodic() override;

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
    hardware::TalonFX m_intakeRollerMotor{Constants::Intake::kIntakeRollerMotorID};
};
