#include <stdio.h>

int main(){

    float a, b, c = 0.0;

    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilátero\n");
    }

    return 0;
}