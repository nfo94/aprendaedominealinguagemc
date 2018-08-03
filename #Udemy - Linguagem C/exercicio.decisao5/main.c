/*****************
*Natália Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float resultado;
    printf("Digite dois numeros: \n");
    scanf("%d%d", &a, &b); //SEMPRE ALOCAR NA MEMÓRIA!!

    if(a > b)
    {
        resultado = a / b;
        printf("O resultado e %f. \n", resultado);
    }
        else
        {
            resultado = b / a;
            printf("O resultado e %f. \n", resultado);
        }

    return 0;
}
