#include <stdio.h>

int main(void){
  float f = 0;
  double d = 0;
  long double ld = 0;
  
  printf("\nEspaco ocupado em memoria por:\n- Float: %zu bytes\n- Double: %zu bytes\n- Long double: %zu bytes\n\n", sizeof(f), sizeof(d), sizeof(ld));
  return 0;
}
