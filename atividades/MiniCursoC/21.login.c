#include <stdio.h>

int main(){

    // inicializando variaveis
    int senha = 1234;
    int tentativa = 0;

    // do-while: primeiro loop antes de entrar no laco de repeticao while
    do {
        // pede a senha, caso ela esteja correta, nem entra no while
        printf("Insira a senha:\n");
        scanf("%d", &tentativa);
        // caso a senha esteja incorreta vai ser executado o while ate que ela esteja correta
        if (senha != tentativa){
            printf("Senha incorreta!\n\n");
        }
        
    } while (senha != tentativa);

    // ao sair do do-while, informa que a senha esta correta
    printf("Acesso permitido\n");
    
    return 0;
}
