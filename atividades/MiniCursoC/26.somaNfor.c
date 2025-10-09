#include <stdio.h>

int main(){

    int final = 1;
    int inicio = 1;
    int soma = 0;

    scanf("%d", &final);

    for (inicio; inicio <= final; inicio++){

        soma += inicio;
    }
    
    printf("Soma de %d até %d: %d\n", 1, final, soma);
    return 0;
}
