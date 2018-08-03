/*
Natália Oliveira
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int num = 0, i = 0;

  while (num >= 0)
  {
    printf("Digite um numero:\n");
    scanf("%d", &num);
    i++;
  }

  printf("Voce digitou %d numeros.\n", i);

  return 0;
}
