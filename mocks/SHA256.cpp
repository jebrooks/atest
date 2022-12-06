#include <stdint.h>
#include "SHA256.h"
 
static uint8_t finalize_result[32];

void SHA256::reset() {}

void SHA256::update(const void *data, size_t len) {}

void SHA256::finalize(uint8_t* hash, size_t len) {
  for (int i=0; i<32; i++) {
    hash[i] = finalize_result[i];
  }
}

void SHA256::set_finalize_result(uint8_t* result) {
  for (int i=0; i<32; i++) {
    finalize_result[i] = result[i];
  }
}
