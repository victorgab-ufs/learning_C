#include <stdio.h>

int main(){

    int array[5] = {0};
    int soma = 0.0;

    printf("Insira 5 números:\n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
        soma += array[i];
    }
    printf("\nNúmeros digitados:\n");
    for (int j = 0; j < 5; j++){
        printf("%d\n", array[j]);
    }

    float media = soma / 5.0; 

    printf("\nSoma: %d\nMedia: %.2f\n", soma, media);

    return 0;
}
