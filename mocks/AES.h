#ifndef AES_H 
#define AES_H 
#include <stdio.h>

class AES256 
{
   
  public:
    AES256();
    virtual ~AES256();
    void decryptBlock(uint8_t *output, const uint8_t *input);
    void set_decrypt_result(uint8_t* result);
    size_t keySize() const;
    bool setKey(const uint8_t *key, size_t len);
};
#endif
