#include <stdio.h>

int main(){

    // inicializacao das variaveis
    float dias[7];
    float maior = 0.0;
    float soma = 0.0;
    // loop que atribui valor a cada elemento representando um dia da semana (0-domingo a 6-sabado)
    for (int i = 0; i < 7; i++){

        scanf("%f", &dias[i]);
        // se o valor atribuido aquele dia for maior que o anterior a ele, ele eh colocado como maior (por isso maior eh inicializado em 0)
        if (dias[i] > maior){
            
            maior = dias[i];
        }
    }
    // loop para adicionar cada elemento da lista a soma de vendas da semana
    for (int j = 0; j < 7; j++) {

        soma += dias[j];
    }
    // calculo da media diaria de vendas da semana
    float media = soma/7;
    // resultados
    printf("---Relatório de Vendas da Semana---\n");
    printf("Venda Total: R$ %.2f\n", soma);
    printf("Média diária: R$ %.2f\n", media);
    printf("Melhor Venda: R$ %.2f\n", maior);

    return 0;
}
