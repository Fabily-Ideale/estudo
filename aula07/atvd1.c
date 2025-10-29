#include <stdio.h>

int main(void){
  int a,b,c;

  a = 10;
  b = 20;
  c = 10;
  printf("\nPrimeira expressao: %d\nSegunda expressao: %d\n\n", ((a==b)||(a==c)), (!(a>5)||(b<15)));
  return 0;                                                     //  0       1      0<-1       0
                                                                //      1                 0
}
