#include <stdio.h>

int main(void){
  printf("\n");

  unsigned i=0;
  label_print:
    i++;
    printf("This is a test using label (:)!\n");
    if (i<2) goto label_print;

  for (unsigned j=0; j<2; j++){
    printf("This a test using for/block ({})!\n");
  }

  printf("\n");
  return 0;
}
