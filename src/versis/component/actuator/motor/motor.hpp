#ifndef __VERSIS_COMPONENT_MOTOR_HPP__
#define __VERSIS_COMPONENT_MOTOR_HPP__

#include "../../common.hpp"

namespace versis {
  namespace actuator {
    typedef struct {
      angle_t ang;
      fixed_t spd;
    } motor_t;
  }
}

#endif //__VERSIS_COMPONENT_MOTOR_HPP__