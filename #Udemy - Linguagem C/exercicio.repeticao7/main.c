/*
Natália Oliveira
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int num = 1, somaPositivo = 0, somaNegativo = 0; //o

  while(num != 0)
  {
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if(num > 0)
    {
      somaPositivo = somaPositivo + num;
    }
    else if(num < 0)
    {
      somaNegativo = somaNegativo + num;
    }
  }

  printf("A soma de positivos foi de %d e de negativos foi de %d.\n", somaPositivo, somaNegativo);

  return 0;
}
