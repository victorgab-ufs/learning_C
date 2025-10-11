#include <stdio.h>

int main(){

    int tamanho, rotacoes;

    scanf("%d", &tamanho);

    int elementos[tamanho];
    int index = 0;
    int inicio = 1;
    
    while (index < tamanho){
        scanf("%d",  &elementos[index]);
        index++;
    }
    
    scanf("%d", &rotacoes);

    while (inicio <= rotacoes){

        int ultimo = elementos[tamanho-1];

        for (int k = tamanho-1; k > 0; k--){

            elementos[k] = elementos[k-1];
        }

        elementos[0] = ultimo;
        inicio++;
    }

    printf("%c", '[');
    
    for (int l = 0; l < tamanho; l++){

        if (l < tamanho-1) {
            printf("%d, ", elementos[l]);
        }

        else {
            printf("%d]", elementos[l]);
        }
    }

    return 0;
}
