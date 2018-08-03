/*
Natália Oliveira
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
  int idade, estadoCivil, qtdS = 0, qtdC = 0, qtdD = 0;
  float mediaSolteiro = 0, mediaCasado = 0, mediaDivorciado = 0;
  char resposta = 's';

  while (resposta == 's')
  {
    printf("Digite a idade:\n");
    scanf("%d", &idade);
    printf("Escolha o estado civil:\n");
    printf("[1] Solteiro.\n");
    printf("[2] Casado.\n");
    printf("[3] Divorciado.\n");
    scanf("%d", &estadoCivil);

    switch (estadoCivil)
    {
      case 1:
        mediaSolteiro += idade;
        qtdS++;
        break;
      case 2:
        mediaCasado += idade;
        qtdC++;
        break;
      case 3:
        mediaDivorciado += idade;
        qtdD++;
        break;
      default:
        printf("Codigo invalido.\n");
        break;
    }

    printf("Deseja inserir dados de outra pessoa? (S/N)\n");
    fflush(stdin);

    /* essa função fflush limpa a tela e para a pergunta para que o usuário
    possa digitar o S ou N*/

    resposta = getchar();
  }

  mediaSolteiro /= qtdS;
  mediaCasado /= qtdC;
  mediaDivorciado /= qtdD;

  printf("A media de idade dos solteiros foi de..... %.2f.\n", mediaSolteiro);
  printf("A media de idade dos  casados foi de...... %.2f.\n", mediaCasado);
  printf("A media de idade dos divorciados foi de .. %.2f.\n", mediaDivorciado);

  return 0;

}
