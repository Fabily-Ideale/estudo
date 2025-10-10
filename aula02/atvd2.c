#include <stdio.h>

int main(void){
  printf("\n  O tipo de variavel 'char' ocupa %lu bytes (%i bits) em memoria.\n\n", sizeof(char), (sizeof(char))*8);
  return 0;
}
