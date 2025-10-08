#include <stdio.h>

int main(){

    int a = 0;

    printf("Escreva um número:\n");
    scanf("%d", &a);

    int aSquare = a*a;
    int aCube = a*a*a;
    
    printf("Quadrado: %d\nCubo: %d\n\n", aSquare, aCube);

    
    return 0;

}