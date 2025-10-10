#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main(void){
  int i = 0;
  short int si = 0;
  long int li = LONG_MAX;
  int32_t int32 = 0;
  long long int lli = 0;  

  printf("\nValor de um 'int' em memoria: %zu bytes\nValor de um 'short_int' em memoria: %zu bytes\nValor de um 'long_int' em memoria: %zu bytes\n", sizeof(i), sizeof(si), sizeof(li));
  printf("Em teoria, o valor de um '(signed) long int' deve ser metade de um 'unsigned long int' menos um, logo o valor e: %li\n", li);
  printf("Valor de um 'long_long_int' em memoria: %zu bytes\n\n", sizeof(lli));
  return 0;
}

// Ao inves de utilizar variaveis que sao de cada tipo eu poderia ter apenas usado o 'sizeof' diretamente no tipo tambem, certo?
