#include <stdio.h>

int main(){

    // lista com 10 numeros (inteiros)
    int lista[10];
    // definicao de variavel
    int qtd;

    // loop para percorrer os 10 elementos da lista (0 a 9) atribuindo um valor lido pelo scanf a cada
    for (int i = 0; i <= 9; i++){

        scanf("%d", &lista[i]);
    }
    // percorre a lista checando se o valor atual e par, caso seja adiciona um ao contador (qtd)
    for (int j = 0; j <= 9; j++){

        if (lista[j] > 0) {
            qtd++;
        }
    }
    // inmprime o valor final de qtd (quantidade de positivos)
    printf("Quantidade de positivos: %d\n", qtd);
    
    return 0;
}
