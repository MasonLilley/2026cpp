// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <ctre/phoenix6/swerve/SwerveModuleConstants.hpp>
#include <ctre/phoenix6/swerve/SwerveDrivetrainConstants.hpp>
#include <frc/geometry/Translation2d.h>
#include <units/length.h>
#include <units/angle.h>

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

using namespace ctre::phoenix6;

namespace OperatorConstants {

inline constexpr int kDriverControllerPort = 0;
}

namespace Constants {
    namespace Intake {
        inline constexpr int kIntakeRollerMotorID = 0;
        inline constexpr double kIntakeRollerSpeed = 0.5;
    }
}