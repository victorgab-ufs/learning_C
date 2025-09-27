// scanf(<form.>, &<v1>, &<v2>, ..., &<vN>);

// "especificador de formato", &<variável>

// & -> atribuição

// 1 ou N variáveis

// Mesmos especificadores de formato com adição do [^chars] -> caracteres indesejados na leitura

#include <stdio.h>

int main(){

    int idade = 0;

    printf("Valor inicial da idade: %d.\n", idade);

    // valor da idade é substituída em %d

    printf("Digite uma idade:\n");
    scanf("%d", &idade);

    // substitui o valor de idade

    printf("Idade informada: %d.\n", idade);

    // é possível ler mais de uma variável em um mesmo scanf dessa forma:

    int peso, altura;

    printf("Insira peso e altura:\n");
    scanf("%d %d", &peso, &altura);

    printf("Peso informado: %d\nAltura informada: %d\n", peso, altura);
}
