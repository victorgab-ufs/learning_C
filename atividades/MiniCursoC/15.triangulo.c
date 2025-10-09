#include <stdio.h>

int main(){

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c){

        printf("Equilatero\n");
    }

    else if (a != b && a != c && b != c){

        printf("Escaleno");
    }

    else{

        printf("Isosceles");
    }

    return 0;
}
