#pragma once
#include "api.h"

inline bool pistion_value = false;
inline bool pistion_value_climb = false;

inline void pistion_set(){
  pistion_value = !pistion_value;
  piston1.set_value(pistion_value);
  piston2.set_value(pistion_value);
  pros::delay(500);
}
inline void pistion_set_Climb(){
  pistion_value_climb = !pistion_value_climb;
  piston3.set_value(pistion_value_climb);
  pros::delay(500);
}