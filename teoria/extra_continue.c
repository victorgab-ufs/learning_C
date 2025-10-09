#include <stdio.h>

int main(){

  for (int i = 1; i <= 20; i++){
    // verifica se é multiplo de 3
    if (i % 3 == 0) {
      // caso seja, pula a iteração atual (pula os múltiplos de 3)
      continue;
    }
    printf("%d ", i);
  }
  printf("\n");
  return 0;
}
