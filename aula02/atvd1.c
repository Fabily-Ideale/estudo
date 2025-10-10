#include <stdio.h>

int main(void){
  signed char schar;
  unsigned char uchar;

  schar = 200; //Seria possivel atribuir as duas de uma vez? -> "schar, uchar = 200;"
  uchar = 200;

  printf("\n  %i %i\n\n", schar, uchar);
  return 0;

  /* Deve retornar um numero negativo no primeiro e 200 no segundo.
   * Nao consigo dizer qual numero negativo deve ser uma vez que a partir do 128 (10000000),
   * a cada +1 no binario, o valor em decimal +1 tambem. */

  // Entao "char" suporta de -128 a 127?
}
