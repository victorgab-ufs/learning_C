#include <stdio.h>

int main(){

    // definicao de variaveis
    int altura, idade, qtd;
    // input (altura do usuario)
    printf("Insira a altura em cm:\n");
    scanf("%d", &altura);
    // input (idade do usuario)
    printf("Insira a idade em anos:\n");
    scanf("%d", &idade);
    // 1° brinquedo exige idade 12+ anos e altura 150+ cm
    if (idade >= 12 && altura >= 150){
        qtd++;
    }
    // 2° brinquedo exige idade 16+ anos e altura 170+ cm
    if (idade >= 16 && altura >= 170){
        qtd++;
    }
    // 3° brinquedo exige idade 14+ anos e altura 140+ cm
    if (idade >= 14 && altura >= 140){
        qtd++;
    }
    // imprime quantidade de brinquedos que o usuario pode utilizar de acordo com as condicoes estabelecidas
    printf("Ela pode andar em %d brinquedo(s)\n", qtd);

    return 0;
}
