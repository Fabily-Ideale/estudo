#include <stdio.h>

int main(void){
  int nota;

  nota = 75;
  if (nota>=90){
    printf("\nConceito A\n\n");
  }else if (nota>=70){
    printf("\nConceito B\n\n");
  }else{
    printf("\nAbaixo de B\n\n");
  }
  return 0;
}
