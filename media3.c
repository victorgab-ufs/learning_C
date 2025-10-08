#include <stdio.h>

int main(){

    float a, b, c, m;
    int qtd = 0;

    scanf("%f %f %f", &a, &b, &c);
    
    
    m = (a + b + c) / 3;

    if (a > m) {
        qtd++;
    }
    
    if (b > m){
        qtd++;
    }

    if (c > m){
        qtd++;
    }

    printf("%d numero(s) sao maiores que a media\n", qtd);


    return 0;
}