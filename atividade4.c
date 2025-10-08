#include <stdio.h>

int main(){

    int multiplo;

    scanf("%d", &multiplo);

    if (multiplo % 3 == 0){

        printf("O numero é multiplo de 3\n");
    }

    else {
        printf("O numero nao eh multiplo de 3\n");
    }

    return 0;
}