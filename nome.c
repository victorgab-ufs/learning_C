#include <stdio.h>

int main() {

    char nome[51];
    int idade = 0;
    float altura = 1.88;

    scanf("Meu nome eh %s, eu tenho %d anos e %fm de altura", nome, &idade, &altura);

    printf("%s\n%d\n%.2f\n", nome, idade, altura);

    return 0;
}