#include <stdio.h>

int main(){

    // inicialização de variável
    int a = 0;

    // input 
    printf("Escreva um número:\n");
    scanf("%d", &a);

    // através da divisão por 10 é possível conseguir o último dígito do número (resto)
    int ultimo = a % 10;

    // resultado
    printf("Ultimo dígito: %d\n", ultimo);
    
    return 0;
}
