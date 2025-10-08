#include <stdio.h>

int soma (int a, int b) {

    int c = a + b;
    return c;
}

int main() {

    int a2, b2;

    scanf("%d %d", &a2, &b2);
    int resultado = soma(a2, b2);
    printf("%d + %d = %d\n", a2, b2, resultado);

    return 0;
}