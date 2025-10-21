#include <stdio.h>

int main(){

    // incializacao das variaveis
    int final = 1;
    int inicio = 1;
    int soma = 0;
    // input (numero n da soma de 1 ate n)
    scanf("%d", &final);
    // loop while que adiciona a soma o numero seguinte ate que se chegue a n
    while (inicio <= final){

        soma += inicio;
        inicio++;
    }
    // resultado da soma de 1 ate n
    printf("Soma de %d até %d: %d\n", 1, final, soma);
    
    return 0;
}
