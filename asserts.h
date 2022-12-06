#include <stdio.h>

void long_equals(long a, long b, int line) {
  if (a != b) {
    printf("Line %d:  got %ld expected %ld\n", line, a, b);
  }
}

void int_equals(int a, int b, int line) {
  if (a != b) {
    printf("Line %d:  got %d expected %d\n", line, a, b);
  }
}

void string_equals(char* a, char* b, int line) {
  bool equal=true;
  for (int i=0; i<1024; i++) {
    equal = a[i] == b[i];
    if (! equal) break;
    if (a[i] == 0 || b[i] == 0) break;
  }
  if (! equal) {
    printf("Line %d: got %s expected %s\n", line, a, b);
  }
}

void byte_arr_equals(uint8_t* a, uint8_t* b, int arr_size, int line) {
  bool equal=true;
  for (int i=0; i<arr_size; i++) {
    equal = a[i] == b[i];
    if (! equal) break;
  }
  if (! equal) {
    printf("Line %d: got\n", line);
    for (int j=0; j<arr_size; j++) {
      printf("%02x ", a[j]);
    }
    printf("\nexpected\n");
    for (int j=0; j<arr_size; j++) {
      printf("%02x ", b[j]);
    }
    printf("\n");
  }    
}
