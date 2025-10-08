#include <stdio.h>

int fib(int numero){

    if (numero == 0) return 0;
    if (numero == 1) return 1;

    else return fib(numero-1)+fib(numero-2);
}


int main() {

    int n = 0;
    scanf("%d", &n);
    int executar = fib(n);
    printf("%d\n", executar);
    return 0;

} 