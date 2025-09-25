#include <stdio.h>

int main(){

    // apenas texto
    printf("Hello, World!\n");

    // depois das aspas coloca-se vírgula e o que vai ser inserido
    
    // inteiro
    printf("Valor inteiro:it %d.\n", 10);
    // float
    printf("Valor real: %f.\n", 3.14159265);
    // float com casas definidas
    printf("Valor real (2 casas): %.2f.\n", 3.14159265);
    // caractere simples (aspas simples)
    printf("Dado de texto: %c.\n", 'a');
    // texto (string)
    printf("Dado de texto: %s.\n", "Testando");

}