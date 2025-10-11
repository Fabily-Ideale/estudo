#include <stdio.h>

int main(void){
  float f = 1.0/3.0;
  double d = 1.0/3.0;
  long double ld = 1.0/3.0;
 
  printf("\nAmbas variaveis possuem o mesmo valor em teoria, confirme abaixo:\n- Float: %.20f\n- Double: %.20g\n- Long double: %.30f\n\n", f, d, ld);
  return 0;
}
