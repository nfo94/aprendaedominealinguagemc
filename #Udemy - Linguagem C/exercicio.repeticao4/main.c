/*
Natália Oliveira
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

  int numero, somaPositivo = 0, somaNegativo = 0, somaZeros = 0, i;

  for(i = 0; i < 20; i++)
  {
    printf("Digite um numero: \n");
    scanf("%d\n", &numero);

    if (numero = 0)
    {
      somaZeros = somaZeros + 1;
    }
      else if(numero > 0)
      {
        somaPositivo = somaPositivo + numero;
      }
        else
        {
          somaNegativo = somaNegativo + numero;
        }
  }

  printf("A soma de positivos foi de %d.\n", somaPositivo);
  printf("A soma de negativos foi de %d.\n", somaNegativo);
  printf("A soma de zeros foi de %d.\n", somaZeros);

  return 0;
}
