#include <stdio.h>
#include <stdbool.h>

int main(void){
  char idade;
  bool pode_votar;
  // Sei que bool e a mesma coisa que char, so queria praticar o uso

  idade = 25;
  pode_votar = (idade>=18)?true:false;
  if (pode_votar==true){
    puts("Pode votar.");
  } else{
    puts("Nao pode votar.");
  }
  return 0;
}
