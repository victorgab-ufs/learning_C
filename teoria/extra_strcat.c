// strcat(string_destino, string_origem)

#include <stdio.h>
#include <string.h>

int main(){

  char nome[100] = "Gustavo";
  char outro_nome[100] = "Henrique";

  strcat(nome, "Henrique");

  strcat(nome, outro_nome);

  return 0;
}
