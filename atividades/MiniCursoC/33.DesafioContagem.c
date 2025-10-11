#include <stdio.h>
#include <string.h>

int main(){

    char palavra[100];
    scanf("%s", &palavra);

    int contagem[26] = {0};
    
    for (int i = 0; i < strlen(palavra); i++){

        char c = palavra[i];
        contagem[c-'a'] += 1;
    }

    for (int j = 'a'; j < 'z'; j++){
        
        if (contagem[j-'a'] == 0){
            continue;
        }

        else{
            printf("%c: %d\n", j, contagem[j-'a']);
        }
    }

    return 0;
}
