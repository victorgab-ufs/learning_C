#include <stdio.h>

int main(){

    // definicao de variaveis
    float a, b, c;
    // input
    scanf("%f %f %f", &a, &b, &c);

    // testa se os tres lados sao iguais
    if (a == b && b == c){

        printf("Equilatero\n");
    }

    // testa se os tres lados sao diferentes
    else if (a != b && a != c && b != c){

        printf("Escaleno");
    }

    // caso que sobrou: um dos lados é diferente
    else{

        printf("Isosceles");
    }

    return 0;
}
