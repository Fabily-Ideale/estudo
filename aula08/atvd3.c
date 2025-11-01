#include <stdio.h>

int main(void){
  int n;

  n = 5; //101
         //1010 = 10
         //010 = 2
  printf("\n%d\n\n", n<<1); //n * 2
  printf("\n%d\n\n", n>>1); //n / 2
  return 0;

  //Isso e uma operacao mais rapida em termos de processamento do que uma operacao tradicional
  //(aritmetica), correto?
  //
  //Isso tem alguma relacao com C fazer uma 'conversao implicita' de divisoes que seriam 'quebradas' - IEEE 754?
}
