/*
Natália Oliveira
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int num, soma = 0, i;
  for (i = 0; i < 10; i++)
  {
    printf("Digite um numero:\n");
    scanf("%d\n", &num);
    soma = soma + num;
  }

  printf("A soma total foi de %d.\n", soma);

  return 0;
}
