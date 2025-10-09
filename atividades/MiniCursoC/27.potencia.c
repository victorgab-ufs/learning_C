#include <stdio.h>

int main(){

    int base = 0;
    int expoente = 0;
    int potencia = 1;

    printf("Digite base e expoente separados por espaço:\n");

    scanf("%d %d", &base, &expoente);

    if (expoente == 0){

        printf("%d\n", 1);
    }

    else{

        for (int i = 1; i <= expoente; i++){

            potencia = potencia * base;
        }
    }

    printf("%d\n", potencia);

    return 0;
}
