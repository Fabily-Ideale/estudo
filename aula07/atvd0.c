#include <stdio.h>

int main(void){
  int x, y;

  x = 1;
  y = -5;
  printf("\nPrimeira expressao: %d\nSegunda expressao: %d\n\n", ((x>0)&&(y<0)), ((x==0)&&(y<0)));
  return 0;                                                     // 1      1         0       1
                                                                //    1                 0
}
