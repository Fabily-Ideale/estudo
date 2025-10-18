#include <stdio.h>

int main(void){
  double d[3];
  
  printf("\nTamanho total do array 'd': %zu bytes\nTamanho de um elemento do array 'd': %zu bytes\nQuantidade de elementos de 'd': %d elementos\n", sizeof(d), sizeof(d[0]), (int)((sizeof(d))/(sizeof(d[0]))));
  printf("Endereco do primeiro elemento na memoria: %p\nEndereco do segundo elemento na memoria: %p\n\n", &d[0], &d[1]);
  return 0;
}
