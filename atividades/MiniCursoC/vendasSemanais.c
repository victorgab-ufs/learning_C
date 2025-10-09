#include <stdio.h>

int main(){

    float dias[7];
    float maior = 0.0;
    float soma = 0.0;

    for (int i = 0; i < 7; i++){

        scanf("%f", &dias[i]);

        if (dias[i] > maior){
            
            maior = dias[i];
        }
    }

    for (int j = 0; j < 7; j++) {

        soma += dias[j];
    }

    float media = soma/7;

    printf("---Relatório de Vendas da Semana---\n");
    printf("Venda Total: R$ %.2f\n", soma);
    printf("Média diária: R$ %.2f\n", media);
    printf("Melhor Venda: R$ %.2f\n", maior);

    return 0;
}
