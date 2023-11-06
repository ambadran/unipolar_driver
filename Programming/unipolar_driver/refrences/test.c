#include <stdio.h>
#include <stdint.h>

int main() {

  uint8_t value = 0b10101010;

  uint8_t choosen_bit = 3;


  printf("%d\n", (value>>7)&0b1);

  return 0;
}
