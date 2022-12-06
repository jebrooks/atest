#include <stdint.h>
#include "AES.h"

uint8_t decrypt_result[16];

AES256::AES256()
{
}

AES256::~AES256()
{
}

/**
 * \brief Size of a 256-bit AES key in bytes.
 * \return Always returns 32.
 */
size_t AES256::keySize() const
{
    return 32;
}

bool AES256::setKey(const uint8_t *key, size_t len) {
  return true;
}

void AES256::decryptBlock(uint8_t *output, const uint8_t *input) {
  for (int i=0; i<16; i++) {
    output[i] = decrypt_result[i];
  }
}

void AES256::set_decrypt_result(uint8_t* result) {
  for (int i=0; i<16; i++) {
    decrypt_result[i] = result[i];
  }
}
