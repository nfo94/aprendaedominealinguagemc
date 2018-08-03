/*
Natália Oliveira
*/

#include <stdio.h>
#include <stdlib.h>

//programa para imprimir a soma dos números de 1 a 100

int main(int argc, char const *argv[]) {
  int contador, soma = 0;

  for(contador = 1; contador <= 100; contador++)
  {
    soma = soma + contador;
  }

  printf("%d\n", soma);

  return 0;
}
