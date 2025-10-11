#include <stdio.h>

int main(){

    int tamanho = 0;
    int rotacoes = 0;
    int quebras = 0;
    int maior = 0;
    int posicao = 0;
    int ordem = 0;

    scanf("%d", &tamanho);
    int elementos[tamanho];

    int index = 0;

    while (index < tamanho){
        scanf("%d",  &elementos[index]);
        index++;
    }

    for (int k = 0; k < tamanho-1; k++){

        if (elementos[k] > elementos[k+1]){
            quebras++;
            posicao = k;
        }

        if (elementos[k] < elementos[k+1]){

            ordem++;
        }

    }

    if (elementos[0] >= elementos[tamanho-1]){
        maior++;
    }

    if (maior == 1 && quebras == 1){

        printf("%d\n", tamanho-posicao-1);
    }

    else if (ordem == tamanho-1){
        printf("%d\n", 0);
    }

    else {
        printf("%d", -1);
    }

    return 0;
}
