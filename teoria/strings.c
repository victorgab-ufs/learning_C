#include <string.h>

COPIAR STRING: strcpy(string_destino, string_origem);
CONCATENAR: strcat(string_destino, string_origem);
COMPARAR: strcmp(string1, string2);
- == iguais
- > depois no dicionario
- < antes no dicionario
TAMANHO: strlen(string1) -> quantidade de caracteres sem o \0
  
// sequência de caracteres (textos, palavras...)

// não existe tipo string nativo em C
// ela passa a ser então um vetor de caracteres

// char nome_vetor[tamanho_vetor];

// NECESSARIO RESERVAR UM ESPAÇO DE MEMORIA A MAIS
char nome[7] = "victor";

'v' 'i' 'c' 't' 'o' 'r' '\0' -> sinaliza o fim de uma string (portanto um espaço adicional acaba sendo reservado)

char letra = 'a';
printf("%d", a) -> exibe o numero equivalente da tabela ascii

// caracteres são reservados em memoria com base na tabela ASCII

// scanf lê até encontrar um espaço, encerra a leitura e coloca o caracter terminador \0

