#include <stdio.h>

int main(){

    // definicao das variaveis
    int tamanho, rotacoes;
    // input para definir tamanho do array
    scanf("%d", &tamanho);
    // incializacao de variaveis
    int elementos[tamanho];
    int index = 0;
    int inicio = 1;
    // leitura dos elementos e atribuicao as posicoes do array
    while (index < tamanho){
        scanf("%d",  &elementos[index]);
        index++;
    }
    // leitura da quantidade de rotacoes desejada
    scanf("%d", &rotacoes);
    // executa as rotacoes
    while (inicio <= rotacoes){
        // define quem eh o ultimo elemento da lista
        int ultimo = elementos[tamanho-1];
        // passa pelos elementos do ultimo para o primeiro
        for (int k = tamanho-1; k > 0; k--){
            // transforma o elemento atual no seu antecessor
            elementos[k] = elementos[k-1];
        }
        // define como primeiro elemento o que antes era o ultimo, finalizando uma rotacao
        elementos[0] = ultimo;
        // incrementa inicio para que o while corresponda ao numero de rotacoes pedido
        inicio++;
    }
    // formatacao para que o output saia em formato de lista
    printf("%c", '[');
    // laco que passa pelos elementos da lista
    for (int l = 0; l < tamanho; l++){
        // imprime os numeros da lista seguidos de virgula, exceto pelo ultimo
        if (l < tamanho-1) {
            printf("%d, ", elementos[l]);
        }
        // imprime o ultimo elemento e fecha os colchetes
        else {
            printf("%d]", elementos[l]);
        }
    }

    return 0;
}
