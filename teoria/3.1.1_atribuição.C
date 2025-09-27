#include <stdio.h>
#include <stdlib.h>

// criando uma constante

#define texto "Entrada e saída de dados."

int main(){

    printf("%s\n", texto);

    // criacao de variaveis e atribuição de valor
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    // Obs: os colchetes em char contêm a quantidade de caracteres no texto (vetor)

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Digite a altura:\n");
    scanf("%f", &altura);
    
    printf("Digite o nome:\n");
    scanf("%s", &nome);

    printf("Dados informados:\n");
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Nome: %s\n", nome);


    system("pause");
}