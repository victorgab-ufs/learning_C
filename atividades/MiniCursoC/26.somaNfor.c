#include <stdio.h>

int main(){

    // inicializacao das variaveis
    int final = 1;
    int inicio = 1;
    int soma = 0;
    // input com valor n da soma de 1 ate n
    scanf("%d", &final);
    // loop for que incrementa o valor de inicio e o soma ao acumulador ate que chegue a n
    for (inicio; inicio <= final; inicio++){

        soma += inicio;
    }
    // resultado da soma de 1 ate n
    printf("Soma de %d até %d: %d\n", 1, final, soma);
    
    return 0;
}
