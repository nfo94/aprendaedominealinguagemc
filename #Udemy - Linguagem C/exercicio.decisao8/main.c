/*****************
*Natália Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float salario;
  printf("Digite o salario do funcionario: \n");
  scanf("%f", &salario);

  if (salario > 2000)
  {
    salario = salario + salario * 0.05;
    printf("O novo salario e de %.2f. \n", salario);
  }
    else if(salario > 1000)
    {
        salario = salario + salario * 0.10;
        printf("O novo salario e de %.2f. \n", salario);
    }
      else
      {
        salario = salario + salario * 0.15;
        printf("O novo salario e de %.2f. \n", salario);
      }

  return 0;
}
