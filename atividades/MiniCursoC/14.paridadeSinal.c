#include <stdio.h>

int main(){

    // inicializacao de variavel
    int n = 0;

    // input
    scanf("%d", &n);

    // checa se o numero eh par  
    if (n % 2 == 0){
        // par + positivo
        if (n > 0) {
            printf("Par e positivo");
        }
        // par + negativo
        else if (n < 0) {
            printf("Par e negativo");
        }
        // par + nulo (nem positivo nem negativo)
        else {
            printf("Null");
        }
    }
    // numero nao eh par (impar)
    else {
        // impar + positivo
        if (n > 0){
            printf("Impar e positivo");
        }
        // par + negativo
        else {
            printf("Impar e negativo");
        }
    }
    return 0;
}
