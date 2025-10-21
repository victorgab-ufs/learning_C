#include <stdio.h>

int main(){

    // definicao das variaveis
    float altura, peso, imc;

    // input para altura
    printf("Sua altura:\n");
    scanf("%f", &altura);

    // input para peso
    printf("Seu peso:\n");
    scanf("%f", &peso);

    // calculo do imc
    imc = peso/(altura*altura);

    // resultado formatado em duas casas decimais
    printf("Seu IMC = %.2f", imc);
    
    return 0;
}
