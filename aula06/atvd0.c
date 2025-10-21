#include <stdio.h>

int main(void){
  int a, b, resultado;
  
  a = 15;
  b = 4;
  resultado = -a + (a/b) + (a%b);
  printf("\nA = %d | B = %d\nValor da expressao '-a + (a/b) + (a_RestoDivisao_b)': %d\n\n", a, b, resultado);
  return 0;
}

/*
 * -15 + 3 + 3
 * -9
 */
