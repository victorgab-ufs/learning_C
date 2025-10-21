#include <stdio.h>

int main(){

    // inicializacao das variaveis
    float valor = 0.0; 
    float consumo = 0.0;
    // input (consumo em kWh)
    scanf("%f", &consumo);

    // consumo ate 100
    if (consumo <= 100) {

        valor = consumo*0.25;
    }
    // consumo maior que 100 ate 200
    else if (consumo > 100 && consumo <= 200){

        valor = consumo*0.40;
    }
    // consumo maior que 200 ate 300
    else if (consumo > 200 && consumo <= 300){

        valor = consumo*0.50;
    }
    // consumo maior que 300
    else {
        
        valor = consumo*0.60;
    }
    // output com valor a ser cobrado
    printf("O valor a ser cobrado é: R$ %.2f.\n", valor);

    return 0;
}
