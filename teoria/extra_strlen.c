#include <stdio.h>
#include <string.h>

int main(){

  char nome[100] = "Gustavo";

  // faz a contagem até encontra o primeiro \0
  printf("%d\n", strlen(nome));
  printf("%d\n", strlen("Gustavo"));
  
  return 0;
}
