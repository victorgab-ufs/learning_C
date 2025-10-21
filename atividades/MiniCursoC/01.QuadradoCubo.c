#include <stdio.h>

int main(){

    // inicialização de variável
    int a = 0;

    // pedindo entrada do usuário
    printf("Escreva um número:\n");
    scanf("%d", &a);

    // operações através do inteiro digitado pelo usuário
    int aSquare = a*a;
    int aCube = a*a*a;

    // resultados
    printf("Quadrado: %d\nCubo: %d\n\n", aSquare, aCube);

    
    return 0;

}
