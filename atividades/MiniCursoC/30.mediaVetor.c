#include <stdio.h>

int main(){

    // inicializacao das variaveis
    int array[5] = {0};
    int soma = 0.0;
    
    printf("Insira 5 números:\n");
    // leitura e soma simultanea dos valores da lista
    for (int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
        soma += array[i];
    }
    // impressao dos valores da lista
    printf("\nNúmeros digitados:\n");
    for (int j = 0; j < 5; j++){
        printf("%d\n", array[j]);
    }
    // calculo da media dos valores do array
    float media = soma / 5.0; 
    // impressao dos valores de soma e media
    printf("\nSoma: %d\nMedia: %.2f\n", soma, media);

    return 0;
}
