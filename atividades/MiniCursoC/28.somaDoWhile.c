#include <stdio.h>

int main(){

    int n = 0;
    int acc = 0;

    do {
        scanf("%d", &n);
        acc += n;
    } while (n != -1);

    printf("%d", acc+1);

    return 0;
}
