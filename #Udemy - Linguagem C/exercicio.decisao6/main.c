/*****************
*Natália Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float receita, despesa;
    printf("Digite a receita da empresa: \n");
    scanf("%f", &receita);
    printf("Digite as despesas da empresa: \n");
    scanf("%f", &despesa);

    if(receita > despesa)
    {
        printf("LUCRO");
    }
            else
            {
                printf("PREJUIZO");
            }

    return 0;
}
