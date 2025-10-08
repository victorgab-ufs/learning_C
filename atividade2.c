#include <stdio.h>

int main(){

    int a = 0;

    printf("Escreva um número:\n");
    scanf("%d", &a);

    int ultimo = a % 10;

    printf("Ultimo dígito: %d\n", ultimo);
    
    return 0;
}
