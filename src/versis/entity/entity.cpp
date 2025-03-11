#include "./entity.hpp"

namespace versis {
  entity::entity() {
    // Create a body at 0, 0 @ 0deg
    this->body  = create_body(create_axis(0, 0), vec2f(I_TO_FX(20), I_TO_FX(20)));
    std::cout << "Created entity!" << std::endl;
  }

  state_e entity::get_state() const {
    return this->state;
  }

  error_t entity::get_err() const {
    return this->err;
  }

  body_t  entity::get_body() const {
    return this->body;
  }

  entity::~entity() {
  }
}