#include <stdio.h>

int auxiliar(int n){
    
    int x = (n*n) + 3*n + 2;
    
    return x;
}

int main(){

    int numero = 0;
    scanf("%d", &numero);
    
    int resultado = auxiliar(numero);
    printf("%d", resultado);
    
    return 0;
}
