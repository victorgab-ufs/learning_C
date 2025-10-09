#include <stdio.h>

int main(){

    int lista[10];
    int qtd;

    for (int i = 0; i <= 9; i++){

        scanf("%d", &lista[i]);
    }

    for (int j = 0; j <= 9; j++){

        if (lista[j] > 0) {
            qtd++;
        }
    }

    printf("Quantidade de positivos: %d\n", qtd);
    return 0;
}
