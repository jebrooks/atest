In your Arduino project create a cpp test file with a main dir like:

```
#ifdef TEST

#include <stdio.h>
#include <asserts.h>

int main(int argc, char *argv[]) {

  //__LINE__ is replaced with source line number
  //fail messages will start with Line XX: so you
  //can easily find the failure

  //will fail, 1 <> 2
  long_equals(1, 2, __LINE__);

  // will pass
  int_equals(1, 1, __LINE__);

  // will fail
  string_equals((char*)"you", (char*)"me", __LINE__);

  return 0;
}
#endif
```
