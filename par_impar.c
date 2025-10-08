#include <stdio.h>

int main(){

    int x = 0;
    scanf("%d", &x);

    if (x % 2 == 0){

        if (x > 0){
            printf("par e positivo\n");
        }

        else if (x < 0){
            printf("par e negativo\n");
        }

        else {
            printf("nulo\n");
        }
    }

    else {

        if (x > 0){
            printf("impar e positivo\n");
        }

        else{
            printf("impar e negativo\n");
        }
    }

    return 0;
}