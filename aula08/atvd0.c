#include <stdio.h>

int main(void){
  int a,b;

  a = 0b101;
  b = 0b011;
  //    001

  printf("\n%d\n\n", a & b); //Deve ser 1
  return 0;
}
