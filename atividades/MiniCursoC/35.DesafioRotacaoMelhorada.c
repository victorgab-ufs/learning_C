#include <stdio.h>

int main(){

    int tamanho = 0;

    int rotacoes;
    int quebras, maior, posicao = 0;

    scanf("%d", &tamanho);
    int elementos[tamanho];

    int index = 0;

    while (index < tamanho){
        scanf("%d",  &elementos[index]);
        index++;
    }

    for (int k = 0; k < tamanho-1-posicao; k++){

        if (elementos[k] > elementos[k+1]){
            quebras++;
            posicao = k;
        }

    }

    if (elementos[0] >= elementos[tamanho-1]){
        maior++;
    }

    if (maior == 1 && quebras == 1){

        printf("%d\n", tamanho-posicao-1);
    }

    else{
        printf("%d\n", -1);
    }

    return 0;
}
