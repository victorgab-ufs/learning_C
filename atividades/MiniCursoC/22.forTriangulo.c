#include <stdio.h>

int main(){

    // inicializacao da variavel
    int casos = 0;
    // input com tamanho do triangulo (linhas)
    scanf("%d", &casos);
    // loop for para gerar as linhas ate que i seja == casos-1 (pois o primeiro elemento eh zero)
    for (int i = 0; i <= casos-1; i++){
        
        // loop para gerar elementos de cada linha de acordo com o i atual
        for (int j = 0; j <= i; j++){
            // ate 9 o proprio numero sera impresso
            if (i < 10) {
                printf("%d", i);
                
            }
            // acima de 10, eh impresso o ultimo digito, mantendo assim constante a diferenca de tamanho entre linhas consecutivas
            else printf("%d", i % 10);
            
        }
        // quebra de linha apos ser finalizado o laco
        printf("\n");
    }
    return 0;
}

/* triangulo do tipo: 

Ex.: 10

0
11
222
3333
44444
555555
6666666
77777777
888888888
9999999999

*/
