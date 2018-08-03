/*
Natália Oliveira
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
  float av1, av2, av3, media;
  char resposta = 's';

  while (resposta == 's')
  {
    printf("Digite a nota da av1:\n");
    scanf("%f", &av1);
    printf("Digite a nota da av2:\n");
    scanf("%f", &av2);
    printf("Digite a nota da av3:\n");
    scanf("%f", &av3);

    media = (av1 + av2 + av3) / 3;

    if (media >= 6)
    {
      printf("Aluno aprovado com media %.1f.\n\n", media);
    }
      else
      {
        printf("Aluno reprovado com media %.1f.\n\n", media);
      }

    printf("Deseja digitar as notas de outro aluno? (S/N)");
    resposta = getche();
    printf("\n\n");
  }

  return 0;
}
