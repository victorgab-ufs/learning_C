#include <stdio.h>

int main(){

    int a = 0;

    printf("Escreva um inteiro:\n");
    scanf("%d", &a);

    int checar = a % 2 == 0;

    if (checar)
        printf("eh par\n");

    else 
        printf("não eh par\n");
    
    return 0;
}