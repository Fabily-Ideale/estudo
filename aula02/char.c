#include  <stdio.h>

int main(void){
  char test;

  printf("A variavel 'test' ocupa %lu bytes/%lu bits em memoria\n", sizeof(test), (sizeof(test)*8));
  
  return 0;
}
