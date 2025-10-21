#include <stdio.h>>

int main(){

    // definicao da variavel
    int dia;
    // input
    scanf("%d", &dia);

    // estrutura switch-case
    
    // switch recebe uma variavel ja definida
    switch(dia){
        // sao testados diversos casos, tendo quebra na execucao quando executado aquele de interesse, ataves do break
        // case _situacao-desejada_: acao; break;  
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda\n"); break;
        case 3: printf("Terça\n"); break;
        case 4: printf("Quarta\n"); break;
        case 5: printf("Quinta\n"); break;
        case 6: printf("Sexta\n"); break;
        case 7: printf("Sábado\n"); break;
        // caso nenhum dos casos tenha sido validado, o default eh executado
        default: printf("Dia inválido\n"); break;
    }
    
    return 0;
}
