#include <stdio.h>

int somaQuadrados(int x){
    
    if (x == 0) {
        return 0;
    }
    
    else {
        return (x*x)+somaQuadrados(x-1);
    }
}

int main(){

    int n = 0;
    scanf("%d", &n);
    
    int resultado = somaQuadrados(n);
    printf("%d", resultado);
    
    return 0;
    
}
