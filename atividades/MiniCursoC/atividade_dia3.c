#include <stdio.h>

int main(){

    float valor = 0.0; 
    float consumo = 0.0;

    scanf("%f", &consumo);

    if (consumo < 100) {

        valor = consumo*0.25;
    }

    else if (consumo >= 100 && consumo < 200){

        valor = consumo*0.40;
    }

    else if (consumo > 200 && consumo <= 300){

        valor = consumo*0.50;
    }

    else {
        
        valor = consumo*0.60;
    }

    printf("O valor a ser cobrado é: R$ %.2f.\n", valor);

    return 0;
}
