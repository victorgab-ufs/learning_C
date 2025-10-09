#include <stdio.h>

int main(){

    int final = 1;
    int inicio = 1;
    int soma = 0;

    scanf("%d", &final);

    while (inicio <= final){

        soma += inicio;
        inicio++;
    }

    printf("Soma de %d até %d: %d\n", 1, final, soma);
    return 0;
}
