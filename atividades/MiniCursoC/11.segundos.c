#include <stdio.h>

int main(){

    // definicao das variaveis
    int h, min, s;

    // input formatado
    scanf("%dh%dmin", &h, &min);

    // calculo dos segundos totais (1 hora = 3600 segundos / 1 minuto = 60 segundos)
    s = (h*3600)+(min*60);

    // output
    printf("s = %d", s);
    
    return 0;
    
}
