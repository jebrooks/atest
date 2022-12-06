#ifndef Curve25519_H 
#define Curve25519_H 
#include <stdint.h>

class Curve25519 
{
  public:
    static bool eval(uint8_t result[32], const uint8_t s[32], const uint8_t x[32]);
    static void set_eval_result(uint8_t result[32]);
};

#endif
