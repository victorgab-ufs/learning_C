#include <stdio.h>

int main(){

    int nota1 = 0;
    int nota2 = 0;
    int nota3 = 0;
    
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    

    float media = (nota1 + nota2 + nota3) / 3.0;

    printf("media = %.2f\n", media);
}