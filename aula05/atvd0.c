#include <stdio.h>

int main(void){
  int i[3];

  i[0] = 0;
  i[1] = 127;
  i[2] = 255;
  printf("\nPrimeira posicao: %p\nSegunda posicao: %p\n", &i[0], &i[1]);
  printf("Diferenca da primeira posicao para a segunda posicao (em bytes): %ld\n\n", ((long long)(&i[1])-(long long)(&i[0])));
  //A diferenca de uma posicao para sua adjacente deve ser a mesma que uma posicao (sozinha) ocupa, uma vez que partindo da primeira posicao, todas as outras estao enderecadas da seguinte maneira: "endereco_inicial+(posicao_almejada*valor_ocupado_em_bytes_por_uma_posicao)" - Que no caso do Int sao 4 Bytes.
  return 0;
}
