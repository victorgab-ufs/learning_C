#include <stdio.h>

int main(){

    int senha = 1234;
    int tentativa = 0;

    do {
        printf("Insira a senha:\n");
        scanf("%d", &tentativa);
        
        if (senha != tentativa){
            printf("Senha incorreta!\n\n");
        }
        
    } while (senha != tentativa);
    
    printf("Acesso permitido\n");
    
    return 0;
}
