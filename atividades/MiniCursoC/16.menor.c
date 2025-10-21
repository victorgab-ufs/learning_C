#include <stdio.h>

int main(){

    // definicao de variaveis
    int a, b, c;
    // input
    scanf("%d %d %d", &a, &b, &c);

    // checa se a eh menor que os outros dois
    if (a < b && a < c) {

        printf("%d", a);
    }
    // checa se o b eh menor que os outros dois
    else if (b < a && b < c) {

        printf("%d", b);
    }
    // caso que sobrou: c ser menor que os outros dois
    else {

        printf("%d", c);
    }

    return 0;
}
