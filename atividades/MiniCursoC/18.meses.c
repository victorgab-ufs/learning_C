#include <stdio.h>

int main(){

    // definicao de variavel
    int mes;
    // input
    scanf("%d", &mes);

    // switch-case comparando mes com os casos ligando o mes com o numero de 1 a 12 que os representa
    switch(mes){
        // numero dos meses e break para impedir a execucao dos casos seguintes
        case 1: printf("Janeiro\n"); break;
        case 2: printf("Fevereiro\n"); break;
        case 3: printf("Março\n"); break;
        case 4: printf("Abril\n"); break;
        case 5: printf("Maio\n"); break;
        case 6: printf("Junho\n"); break;
        case 7: printf("Julho\n"); break;
        case 8: printf("Agosto\n"); break;
        case 9: printf("Setembro\n"); break;
        case 10: printf("Outubro\n"); break;
        case 11: printf("Novembro\n"); break;
        case 12: printf("Dezembro\n"); break;
        // exececao: numeros fora do intervalo sao invalidos
        default: printf("Mês inválido\n"); break;
    }

    return 0;
}
