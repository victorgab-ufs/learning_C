#include <stdio.h>
#include <string.h>

int main(){

    char palavra[100];
    char palavraInvertida[100];
    int index = 0;
    scanf("%s", &palavra);

    for (int i = strlen(palavra)-1; i >= 0; i--){

        palavraInvertida[index] = palavra[i];
        index++;
    }

    if (strcmp(palavra, palavraInvertida) == 0){
        printf("Eh palindromo\n");
    }

    else {
        printf("Nao eh palindromo\n");
    }

    return 0;
}
