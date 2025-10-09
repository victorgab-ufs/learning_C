#include <stdio.h>

int main(){

    int altura, idade, qtd;

    printf("Insira a altura em cm:\n");
    scanf("%d", &altura);

    printf("Insira a idade em anos:\n");
    scanf("%d", &idade);

    if (idade >= 12 && altura >= 150){
        qtd++;
    }

    if (idade >= 16 && altura >= 170){
        qtd++;
    }

    if (idade >= 14 && altura >= 140){
        qtd++;
    }

    printf("Ela pode andar em %d brinquedo(s)\n", qtd);

    return 0;
}
