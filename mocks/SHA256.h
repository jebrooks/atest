#ifndef SHA256_H 
#define SHA256_H 
#include <stdio.h>

class SHA256 
{
  public:
    void reset();
    void update(const void *data, size_t len);
    void finalize(uint8_t *hash, size_t len); 
    void set_finalize_result(uint8_t* result);
};
#endif
