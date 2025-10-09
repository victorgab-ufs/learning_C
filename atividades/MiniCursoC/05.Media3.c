#include <stdio.h>

int main(){

    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    

    float media = (nota1 + nota2 + nota3) / 3;

    printf("media = %.2f\n", media);
}
