#include <stdio.h>

int main(){

  int opcao;
  do {                              // faça
    printf("Digite 0 para sair: ");
    scanf("%d", &opcao);
  } while (opcao != 0);             // enquanto
  printf("Programa finalizado!\n");
  return 0;

  // executa o bloco de código uma vez e depois testa a condição
}
