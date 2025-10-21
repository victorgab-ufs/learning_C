#include <stdio.h>

// funcao auxiliar para resolucao do problema com recursividade
int fat(int num) {

    // caso base (0! = 1)
    if (num == 0) return 1;
    // passo indutivo (n! = n*(n-1)!)
    else return num*fat(num-1);
}

int main() {

    // inicializacao da variavel
    int numero = 0;

    // input
    printf("Insira um número para calcular seu fatorial:\n");
    scanf("%d", &numero);

    // chamada da funcao auxiliar
    int fatorial = fat(numero);

    // output
    printf("O fatorial de %d é %d\n", numero, fatorial);

    return 0;

}
