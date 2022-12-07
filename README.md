This is a hackish test framework for doing tests of sketches.  The best practice is to put as much platform agnostic business logic as you can in .h files and test those methods.  That limits what you have to implement for tests.  If you have to implement/mock some board specific logic to run on your computer, you can do that but you will need to include it in the Makefile.  

In your Arduino project create a cpp test file like below.  Be sure to have the #ifdef TEST and #endif so the Arduino IDE ignores this when building the sketch.

```
#ifdef TEST

#include <stdio.h>
#include <asserts.h>
#include <your_platform_agnostic_logic_here.h>

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

You will need to create a Makfile similar to Makefile_template in this project and put it in your sketch directory.  The Makefile defines the TEST macro so the test code is included.
