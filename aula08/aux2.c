#include <stdio.h>

int main(void){
  printf("\n%zu B = %zu b\n\n", sizeof(int), (sizeof(int)*8));
  return 0;
}
