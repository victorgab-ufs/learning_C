#include <stdio.h>

int fat(int num) {

    if (num == 0) return 1;

    else return num*fat(num-1);
}

int main() {

    int numero = 0;
    printf("Insira um número para calcular seu fatorial:\n");
    scanf("%d", &numero);

    int fatorial = fat(numero);
    printf("O fatorial de %d é %d\n", numero, fatorial);

    return 0;

}
