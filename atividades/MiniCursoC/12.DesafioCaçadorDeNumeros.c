#include <stdio.h>

// funcao auxiliar com o jogo da maquina adivinhar numeros de 1 ate 1000
int jogo(int tentativa, int objetivo){

    // output com tentativa da maquina (500 é a inicial)
    printf("%d ?\n", tentativa);

    // definicao de variavel do tipo caractere
    char c;
    // input do usuario com <, = ou > para dizer a maquina relacao do numero secreto com o chutado
    scanf(" %c", &c);

    // quando escrito = os numeros sao iguais, logo o jogo acaba
    if (c == '=') {

        // revela o numero secreto, uma vez que foi adivinhado e retorna o inteiro tentativa, encerrando o jogo
        printf("O numero secreto eh %d\n", tentativa);
        return tentativa;
    }

    // quando escrito > o numero certo eh maior
    else if (c == '>') {

        // jogo testa numero 1.5x maior
        return jogo(tentativa + tentativa / 2, objetivo);

    }
        
    // quando escrito < o numero certo eh menor
    else if (c == '<') {

        // jogo testa numero que eh metade do anterior
        return jogo(tentativa / 2, objetivo);
    }

}


int main(){

    // inicializacao da variavel
    int secreto = 0;

    // input com o numero secreto escolhido pelo usuario
    scanf("%d", &secreto);
    
    // chamada da funcao auxiliar com a tentativa inicial da maquina(500) e o numero secreto escolhido ppelo usuario
    int resultado = jogo(500, secreto);

    return 0;
}
