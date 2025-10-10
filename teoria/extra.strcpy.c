// strcpy(string_destino, string_origem)

#include <stdio.h>
#include <string.h>

int main(){

  char nome[100] = "Gustavo";
  
  strcpy(nome, "Henrique");

  char outro_nome[] = "Henrique";

  strcopy(nome, outro_nome);
  
  return 0;
}
