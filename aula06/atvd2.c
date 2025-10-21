#include <stdio.h>

int main(void){
  int a,b,resultado;

  a = 10;
  b = 10;
  resultado = 0;
  resultado = (a++)+(++b); //21 | B valera 11 antes de executar a expressão, ja A valera 11 apos a execucao
  printf("\n-> A: %d\n-> B: %d\n-> Resultado: %d\n\n", a,b,resultado);
  return 0;
}
