/*****************
*Natália Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Digite um numero: \n");
    scanf("%d", &a);

    if(a == 0)
    {
        printf("IGUAL A ZERO");
    }
        else if(a < 0)
        {
            printf("MENOR QUE ZERO");
        }
            else
            {
                printf("MAIOR QUE ZERO");
            }

    return 0;
}
