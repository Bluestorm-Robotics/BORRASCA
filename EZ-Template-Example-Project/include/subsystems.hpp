#pragma once

#include "api.h"
inline pros::Motor Intake(14);
inline pros::Motor Elevator(4);
inline pros::adi::DigitalOut piston1('A');
inline pros::adi::DigitalOut piston2('B');
inline pros::Optical optical_sensor(9);
inline pros::Motor Wall_stake(3);
inline pros::Motor Climb_1(5);
inline pros::Motor Climb_2(6);
inline pros::adi::DigitalOut piston3('C');
// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');