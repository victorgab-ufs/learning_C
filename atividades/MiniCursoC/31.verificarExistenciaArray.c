#include <stdio.h>

int main(){

    int numeros[10] = {0};
    int numero = 0;
    int maior, menor = 0;
    
    printf("Insira os números da lista:\n");
    
    for (int i = 0; i < 10; i++){

        scanf("%d", &numeros[i]);
    }
    
    printf("\nInsira um numero para checar se esta na lista:\n");
    
    scanf("%d", &numero);

    for (int j = 0; j < 11; j++){

        if (j == 10){
            printf("%d\n", -1);
        }
        
        if (numero != numeros[j]){
            continue;
        }

        else {
            printf("O numero %d esta no indice %d\n", numero, j);
            break;
        }
        
    }

    maior = numeros[0];
    menor = numeros[0];

    for (int k = 1; k < 10; k++){

        if (numeros[k] > maior){
            maior = numeros[k];
        }

        if (numeros[k] < menor){
            menor = numeros[k];
        }
    }

    printf("\nMaior elemento: %d\nMenor elemento: %d\n", maior, menor);

    return 0;
}
