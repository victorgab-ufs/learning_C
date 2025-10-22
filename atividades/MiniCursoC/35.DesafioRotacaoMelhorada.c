#include <stdio.h>

int main(){

    // inicializacao das variaveis
    int tamanho = 0;
    int rotacoes = 0;
    int quebras = 0;
    int maior = 0;
    int posicao = 0;
    int ordem = 0;

    // input que define o tamanho do array de inteiros elementos
    scanf("%d", &tamanho);
    int elementos[tamanho];
    
    int index = 0;
    // loop para leitura de inteiros e atribuicao deles aos indices da lista
    while (index < tamanho){
        scanf("%d",  &elementos[index]);
        index++;
    }
    // loop para percorrer a lista
    for (int k = 0; k < tamanho-1; k++){
        // se o elemento atual for maior que o elemento seguinte, ha uma "quebra", isso eh necessario devido a so poder ter resolucao caso haja ate uma quebra
        if (elementos[k] > elementos[k+1]){
            quebras++;
            // registra a posicao (indice) onde ocorreu a quebra
            posicao = k;
        }
        // adiciona um a ordem a cada elemento que eh menor que seu sucessor
        if (elementos[k] < elementos[k+1]){

            ordem++;
        }

    }
    // checa se o primeiro elemento eh maior ou igual que o ultimo
    if (elementos[0] >= elementos[tamanho-1]){
        maior++;
    }
    // havendo uma quebra e o primeiro elemento sendo maior ou igual ao ultimo, pode-se calcular o numero de rotacoes para ordenar o vetor atraves de tamanho-posicao-1
    if (maior == 1 && quebras == 1){

        printf("%d\n", tamanho-posicao-1);
    }
    // se a quantidade de elementos menores que seus sucessores for igual a quantidade de numeros - 1, a lista esta ordenada
    else if (ordem == tamanho-1){
        // por isso eh impresso o 0
        printf("%d\n", 0);
    }
    // nao atendendo a nenhuma das condicoes acima, nao eh possivel ordenar a lista
    else {
        printf("%d", -1);
    }

    return 0;
}

