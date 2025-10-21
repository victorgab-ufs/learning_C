#include <stdio.h>

int main(){

    // definicao de variavel
    int ano;

    // input
    scanf("%d", &ano);
    
    // checa se o ano eh multiplo de 4
    if (ano % 4 == 0){

        printf("Eh bissexto\n");
    }
    
    else{

        printf("Nao eh bissexto\n");
    }

    return 0;
}
