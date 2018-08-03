/*
Natália Oliveira
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
  int codigo, total;

  do {
    system("cls");
    printf("Menu de opcoes:");
    printf("[0] - Encerrar programa\n";
    printf("[1] - Incluir uma unidade\n");
    printf("[2] - Excluir uma unidade\n");
    printf("[3] - Mostrar o disponivel\n");
    printf("[4] - Mostrar o total de entrada\n");
    printf("[5] - Mostrar o total de saidas\n");
    printf("Escolha uma opcao:\n");
    scanf("%d\n", &codigo);


  } while(codigo != 0);

  return 0;
}
