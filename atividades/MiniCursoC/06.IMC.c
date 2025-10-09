#include <stdio.h>

int main(){

    float altura, peso, imc;
    
    printf("Sua altura:\n");
    scanf("%f", &altura);
    
    printf("Seu peso:\n");
    scanf("%f", &peso);
    
    imc = peso/(altura*altura);
    
    printf("Seu IMC = %.2f", imc);
    
    return 0;
}
