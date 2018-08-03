/*****************
*Natália Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float receita, despesas, lucro;
    printf("Digite a receita: \n");
    scanf("%f", &receita);
    printf("Digite as despesas: \n");
    scanf("%f", &despesas);
    lucro = receita - despesas;
    printf("O lucro da empresa foi de R$ %.2f. \n", lucro);

    return 0;
}
