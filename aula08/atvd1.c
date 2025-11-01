#include <stdio.h>

int main(void){
  int x,y;

  x = 10; //1010
  y = 5;  //0101
  //or      1111
  //xor     1111
  printf("\n%d\n\n", x|y);  //15
  printf("\n%d\n\n", x^y);  //15
  return 0;
}
