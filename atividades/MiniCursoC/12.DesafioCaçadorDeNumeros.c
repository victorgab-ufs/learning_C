#include <stdio.h>

int jogo(int tentativa, int objetivo){

    printf("%d ?\n", tentativa);

    char c;
    scanf(" %c", &c);
    
    if (c == '=') {

        printf("O numero secreto eh %d\n", tentativa);
        return tentativa;
    }
    
    else if (c == '>') {

        return jogo(tentativa + tentativa / 2, objetivo);

    }

    else if (c == '<') {

        return jogo(tentativa / 2, objetivo);
    }

        
}


int main(){

    int secreto = 0;

    scanf("%d", &secreto);

    int resultado = jogo(500, secreto);

    return 0;
}
