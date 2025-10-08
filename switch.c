#include <stdio.h>

int main(){

    int dia = 0;

    scanf("%d", &dia);

    // executa de acordo com o caso das constantes
    switch(dia){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Dia inválido\n");
            break;
        // default tem a função do else
    }
    return 0;
}