#include <stdio.h>

int main(){

    // inicializacao das variaveis
    int soma = 0;
    int produto = 1;
    // criacao de lista com ate 3 inteiros
    int numeros[3];
    // for que percorre a lista atribuindo o valor escaneado a posicao atual, o adiciona a soma e o multiplica ao produto
    for (int i = 0; i < 3; i++){

        scanf("%d", &numeros[i]);
        soma += numeros[i];
        produto *= numeros[i];

    }
    //resultado
    printf("Soma: %d\nProduto: %d\n", soma, produto);
    
    return 0;
}
