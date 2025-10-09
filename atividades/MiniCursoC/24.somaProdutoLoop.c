#include <stdio.h>

int main(){

    int soma = 0;
    int produto = 1;
    int numeros[3];
    
    for (int i = 0; i < 3; i++){

        scanf("%d", &numeros[i]);
        soma += numeros[i];
        produto *= numeros[i];

    }

    printf("Soma: %d\nProduto: %d\n", soma, produto);
    return 0;
}
