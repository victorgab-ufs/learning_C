#include <stdio.h>

int main(){
  
  // array
  // tamanho fixo
  // armazena elementos de um mesmo tipo de dado em posições de memória contígua
  // tipo_dado nome_vetor[tamanho_vetor];
  // compilador aloca um bloco de memoria para o vetor com indice (index) de 0 a n-1
  // indices de 0 até tamanho-1

  // tipo (int *) ponteiro qur aponta para o primeiro elemento do vetor
    int array[5];
  // imprime o endereco de memoria reservado para o array
    printf("%p\n", array);
    return 0;

  // indices nao existentes podem imprimir valor aleatorio, lixo de memória...
  // notação para vetores

  int v[n] = {x0, x1, x2, x3, ..., xn-1};

  // inicialização parcial
  int v[n] = {x0, x1, x2}; -> os outros elementos sao substituidos por 0

  // inicialização com atalho
  int v[n] = {0} == {0, 0, 0, 0, 0}
}



