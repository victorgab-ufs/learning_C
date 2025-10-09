#include <stdio.h>

int main(){

    int n = 0;
    scanf("%d", &n);

    if (n % 2 == 0){

        if (n > 0) {
            printf("Par e positivo");
        }

        else if (n < 0) {
            printf("Par e negativo");
        }

        else {
            printf("Null");
        }
    }

    else {

        if (n > 0){
            printf("Impar e positivo");
        }

        else {
            printf("Impar e negativo");
        }
    }
    return 0;
}
