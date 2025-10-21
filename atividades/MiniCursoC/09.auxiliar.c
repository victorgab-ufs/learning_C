#include <stdio.h>

// implementacao de funcao auxiliar (pedida no problema)
int auxiliar(int n){

    // calculo pedido na funcao auxiliar
    int x = (n*n) + 3*n + 2;

    // retorno da funcao (int)
    return x;
}

int main(){

    // inicializacao da variavel
    int numero = 0;

    // input
    scanf("%d", &numero);

    // chamada da funcao auxiliar
    int resultado = auxiliar(numero);

    // output
    printf("%d", resultado);
    
    return 0;
}
