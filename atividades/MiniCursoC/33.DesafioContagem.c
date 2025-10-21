#include <stdio.h>
#include <string.h>

int main(){

    // criacao do array e input (palavra)
    char palavra[100];
    scanf("%s", &palavra);

    // array para contar cada letra do alfabeto (a = contagem[0], ..., z = contagem[25])
    int contagem[26] = {0};
    // percorre a palavra subtraindo o valor inteiro do caractere na tabela ascii pelo valor de a (97)
    for (int i = 0; i < strlen(palavra); i++){
        // obtem o caractere atual da palavra
        char c = palavra[i];
        // adiciona 1 ao valor da posicao da letra lida
        contagem[c-'a'] += 1;
        // ASCII: a = 97, ..., z = 122
    }
    // percorre a lista variando o valor de 97 a 122
    for (int j = 'a'; j < 'z'; j++){
        // checa se foi adcionada ao menos uma unidade na letra atual (a-a = 97-97 = indice 0, ..., z-a = 122-97 = indice 25)
        if (contagem[j-'a'] == 0){
            // se nao ha aquela letra na palavra, pula o loop atual
            continue;
        }
        // caso a letra tenha ao menos 1 elemento na palavra, ela eh impressa junto com a quantidade de aparicoes
        else{
            printf("%c: %d\n", j, contagem[j-'a']);
        }
    }

    return 0;
}
