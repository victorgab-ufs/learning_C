#include <stdio.h>
// biblioteca para manipulacao de strings
#include <string.h>

int main(){
    // inicializacao de variaveis
    char palavra[100];
    char palavraInvertida[100];
    int index = 0;
    // input (palavra que sera invertida
    scanf("%s", &palavra);
    // strlen(string) -> tamanho da string (quantidade de caracteres)
    // pega a ultima letra da string (strlen(palavra)-1) e torna a primeira (index) da palavraInvertida
    for (int i = strlen(palavra)-1; i >= 0; i--){

        palavraInvertida[index] = palavra[i];
        index++;
    }
    // strcmp -> retorna 0 caso as palavras sejam iguais
    if (strcmp(palavra, palavraInvertida) == 0){
        printf("Eh palindromo\n");
    }
    // nao retornando 0, elas sao diferentes
    else {
        printf("Nao eh palindromo\n");
    }

    return 0;
}
