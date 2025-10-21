#include <stdio.h>

int main(){
    // inicializacao das variaveis
    int n = 0;
    int acc = 0;
    // escaneia um numero e o adiciona a soma (acc) enquanto esse numero for diferente de -1
    do {
        scanf("%d", &n);
        acc += n;
    } while (n != -1);
    // imprime numero mais 1, evitando o problema do -1 interagir com o acc
    printf("%d", acc+1);

    return 0;
}
