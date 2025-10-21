#include <stdio.h>

int main(){

    // inicialização das variáveis
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;

    // input do usuário
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    // cálculo da média
    float media = (nota1 + nota2 + nota3) / 3;

    // resultado formatado para duas casas decimais
    printf("media = %.2f\n", media);

    return 0;
}
