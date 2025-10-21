#include <stdio.h>

int main(){

    // inicializacao das variaveis
    int base = 0;
    int expoente = 0;
    int potencia = 1;

    printf("Digite base e expoente separados por espaço:\n");
    // recebendo valores de base e expoente
    scanf("%d %d", &base, &expoente);
    // caso o expoente seja zero, o resultado da potencia eh 1
    if (expoente == 0){

        printf("%d\n", 1);
    }
    // nao sendo...
    else{
        // o valor da base eh multiplicado por ele mesmo n vezes, sendo n o valor do expoente
        for (int i = 1; i <= expoente; i++){

            potencia = potencia * base;
        }
    }
    // imprime valor da potencia
    printf("%d\n", potencia);

    return 0;
}
