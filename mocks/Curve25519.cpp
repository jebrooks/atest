#include <stdint.h>
#include "Curve25519.h"

uint8_t eval_result[32];

bool Curve25519::eval(uint8_t result[32], const uint8_t s[32], const uint8_t x[32]) {
  for (int i=0; i<32; i++) {
    result[i] = eval_result[i];
  } 
  return true;
}
   
void Curve25519::set_eval_result(uint8_t result[32]) {
  for (int i=0; i<32; i++) {
    eval_result[i] = result[i];
  }
}

