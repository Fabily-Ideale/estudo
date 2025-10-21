#include <stdio.h>

int main(void){
  int x, y, z;

  x = 10;
  y = 5;
  z = 2;
  x *= y-z+1;
  printf("\nValor de X apos a atribuicao: %d\n\n", x);
  return 0;
}

/*
 * ...(5-2+1) = ...(4)
 * 10 x 4 = 40
 */
