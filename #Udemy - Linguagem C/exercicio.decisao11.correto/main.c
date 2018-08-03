/*
Natália Oliveira
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float salarioHora, salarioBruto, salarioLiquido, salarioFamilia;
  int horasTrabalhadas, filhos;
  printf("Digite o salario/hora de um professor: \n");
  scanf("%f", &salarioHora);
  printf("Digite quantos filhos menores de 14 anos tem o professor: \n");
  scanf("%d", &filhos);
  printf("Digite quantas horas o professor trabalhou: \n");
  scanf("%d", &horasTrabalhadas);

  salarioBruto = salarioHora * horasTrabalhadas;

  printf("O salario bruto e de ........... R$ %.2f\n", salarioBruto);

  if(salarioBruto < 700)
  {
    salarioFamilia = filhos * 8.50;
    salarioLiquido = salarioBruto + salarioFamilia;
    printf("O salario liquido e de ........... R$ %.2f \n", salarioLiquido);
    printf("O salario familia e de ........... R$ %.2f \n", salarioFamilia);
  }
    else if(salarioBruto < 1000)
    {
      salarioFamilia = filhos * 6.50;
      salarioLiquido = salarioBruto + salarioFamilia;
      printf("O salario liquido e de ........... R$ %.2f \n", salarioLiquido);
      printf("O salario familia e de ........... R$ %.2f \n", salarioFamilia);
    }
      else if(salarioBruto > 1000)
      {
        salarioFamilia = filhos * 2.50;
        salarioLiquido = salarioBruto + salarioFamilia;
        printf("O salario liquido e de ........... R$ %.2f \n", salarioLiquido);
        printf("O salario familia e de ........... R$ %.2f \n", salarioFamilia);
      }

  return 0;
}
