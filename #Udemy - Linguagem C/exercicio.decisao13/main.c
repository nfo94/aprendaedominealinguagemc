/*
Natália Oliveira
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int num;
  printf("Digite um numero inteiro: \n");
  scanf("%d", &num);

  switch (num)
  {
    case 0:
      printf("Zero. \n");
      break;
    case 1:
      printf("Um.\n");
      break;
    case 2:
      printf("Dois.\n");
      break;
    case 3:
      printf("Tres.\n");
      break;
    case 4:
      printf("Quatro.\n");
      break;
    case 5:
      printf("Cinco.\n");
      break;
    case 6:
      printf("Seis.\n");
      break;
    case 7:
      printf("Sete.\n");
      break;
    case 8:
      printf("Oito.\n");
      break;
    case 9:
      printf("Nove.\n");
      break;
    case 10:
      printf("Dez.\n");
      break;
    default:
      printf("Fora do alcance.\n");
      break;
  }

  return 0;
}
