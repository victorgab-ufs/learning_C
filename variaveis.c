#include <stdio.h>

int main (){

    char letra = 'a';
    int inteiro = 0;
    float real = 3.14;
    double precisao = 3.141592;
    char string[] = "Curso_C";
    int* pnum = &inteiro;

    printf("%c\n", letra);
    printf("%d\n", inteiro);
    printf("%f\n", real);
    printf("%lf\n", precisao);
    printf("%s\n", string);
    printf("%p\n", pnum);

    return 0;
}






