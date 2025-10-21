#include <stdio.h>

int main(){

    // inicialização das variáveis
    int a = 0;
    int b = 0;

    // input do usuário
    printf("Escreva dois números:\n");
    scanf("%d %d", &a, &b);

    // operações de divisão e resto
    int divisao = a / b;
    int resto = a % b;

    // resultado
    printf("Divisão: %d\nResto: %d\n", divisao, resto);

    return 0;
}
