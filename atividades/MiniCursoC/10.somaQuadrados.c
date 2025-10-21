#include <stdio.h>

// funcao auxiliar para calcular soma de quadrados de 1 ate n com recursão
int somaQuadrados(int x){

    // se numero atual é 0, soma 0 (caso base)
    if (x == 0) {
        return 0;
    }

    // soma dos quadrados = x² + (x-1)² + ... + 0
    else {
        return (x*x)+somaQuadrados(x-1);
    }
}

int main(){

    // inicializacao de variavel
    int n = 0;

    // input
    scanf("%d", &n);

    // chamada da funcao auxiliar
    int resultado = somaQuadrados(n);
    
    // output
    printf("%d", resultado);
    
    return 0;
    
}
