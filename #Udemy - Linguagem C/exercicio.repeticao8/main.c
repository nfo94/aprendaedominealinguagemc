/*
Natália Oliveira
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
  int num;
  float media, soma = 0, qntLido; ;
  char resposta = 's';

  while (resposta == 's')
  {
    printf("Digite um numero:\n");
    scanf("%d", &num);

    soma += num;    //soma = soma + num
    qntLido++;

    printf("Desaja digitar outro numero: (S/N)?");
    resposta = getche();
    printf("\n");
  }

  media = soma / qntLido;
  printf("A media dos numeros lidos foi de %f.\n", media);

  return 0;
}

/*cast:
  media = ((float)soma / (float)qtdLido);
  isso serve para forçar uma determinada condição, nesse caso, apresentar
  float ao invés de int
*/
