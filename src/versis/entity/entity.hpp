#ifndef __VERSIS_ENTITY_HPP__
#define __VERSIS_ENTITY_HPP__

#include "../common.hpp"

namespace versis {

  typedef enum {
    STATE_STILL,
    STATE_MOVING,
    STATE_BUSY,
  } state_e;

  class entity {
  private:
    body_t   body;
    state_e  state;
    error_t  err;
  public:
    entity();

    // To override
    virtual
    void step()     {}

    // Getters
    state_e get_state() const;
    error_t get_err()   const;
    body_t  get_body()  const;

    ~entity();
  };
};

#endif //__VERSIS_ENTITY_HPP__
