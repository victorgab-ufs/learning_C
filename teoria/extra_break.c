#include <stdio.h>

int main() {

  // contagem de 1 até 10
  for (int i = 1; i <= 10; 1++){
    printf("Numero: %d\n", i);

      // condição para executar o break
      if (i == 5){
        break; // o laço para aqui
      }
  }

  printf("Laço interrompido.\n");
  return 0;
}
