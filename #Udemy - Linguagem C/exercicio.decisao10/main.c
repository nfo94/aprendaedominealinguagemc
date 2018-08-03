/*
Natália Oliveira
*/

#include <stdio.h>
#include <stdlib.h>

//Programa para calcular o desconto de INSS no salário de um funcionário

int main()
{
  float salario;
  printf("Digite o salario do empregado: \n");
  scanf("%f", &salario);
  printf("O salario bruto e de %.2f. \n", salario);

  if (salario <= 1317.07)
  {
    printf("A taxa de INSS e de 8%%. \n");
    salario = salario - (salario * 0.08);
    printf("O salario liquido e de %.2f. \n", salario);
  }
    else if(salario < 2195.12)
    {
      printf("A taxa de INSS e de 9%%. \n");
      salario = salario - (salario * 0.09);
      printf("O salario liquido e de %.2f. \n", salario);
    }
      else
      {
        printf("A taxa de INSS e de 11%%. \n");
        salario = salario - (salario * 0.11);
        printf("O salario liquido e de %.2f. \n", salario);
      }

  return 0;
}
