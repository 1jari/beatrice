#ifndef __VERSIS_ROBOT_HPP__
#define __VERSIS_ROBOT_HPP__

#include "../common.hpp"
#include "../entity/entity.hpp"
#include "../component/component.hpp"

namespace versis {
  class robot : public entity {
  private:
    typedef entity super;
    struct {
      int               n_m;      // Number of motors
      actuator::motor_t *motors;  // Motor array
    };
  public:
    robot(int n_m) : super()  {
      // Motor Setup
      this->n_m   = n_m;
      this->motors = 
        (actuator::motor_t*)malloc(n_m * sizeof(actuator::motor_t));
      
      std::cout << "Created Robot" << std::endl;
    }
    void step()     override  {}

    ~robot() {
      if(motors) {
        free(motors);
      }
    }
  };
};

#endif //__VERSIS_ROBOT_HPP__
