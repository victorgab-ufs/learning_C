#include <stdio.h>

int main(){

    // incializacao das variaveis
    int numeros[10] = {0};
    int numero = 0;
    int maior, menor = 0;
    
    printf("Insira os números da lista:\n");
    // leitura dos numeros da lista
    for (int i = 0; i < 10; i++){

        scanf("%d", &numeros[i]);
    }
    
    printf("\nInsira um numero para checar se esta na lista:\n");
    // numero que se deseja checar se esta na lista
    scanf("%d", &numero);
    // percorre a lista ate encontrar o numero que se deseja checar a existencia
    for (int j = 0; j < 11; j++){
        // se o j passar do limite da lista o numero nao esta presente, logo indice = -1
        if (j == 10){
            printf("%d\n", -1);
        }
        // se o numero nao for o escolhido, pula a rodada atual do loop
        if (numero != numeros[j]){
            continue;
        }
        // diferente dos outros casos, o numero eh igual, entao o loop eh encerrrado e a posicao atual eh informada
        else {
            printf("O numero %d esta no indice %d\n", numero, j);
            break;
        }
        
    }
    // definindo o primeiro numero da lista como maior e menor para posteriormente serem feitas as comparacoes
    maior = numeros[0];
    menor = numeros[0];
    // passa pelos elementos comparando se sao menores ou maiores que o valor atribuido a maior/menor
    for (int k = 1; k < 10; k++){

        if (numeros[k] > maior){
            maior = numeros[k];
        }

        if (numeros[k] < menor){
            menor = numeros[k];
        }
    }
    // imprimime maior e menor elementos da lista
    printf("\nMaior elemento: %d\nMenor elemento: %d\n", maior, menor);

    return 0;
}
