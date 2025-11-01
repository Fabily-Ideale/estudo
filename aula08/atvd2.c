#include <stdio.h>

int main(void){
  int num;

  num = 10; //00000000000000000000000000001010
            //11111111111111111111111111110101
  printf("\n%d\n\n", ~num);
  return 0;
}
