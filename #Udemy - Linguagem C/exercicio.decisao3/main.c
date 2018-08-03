/*****************
*Nat�lia Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Digite dois numeros: \n");
    scanf("%d%d", &a, &b);
    if(a > b)
    {
        printf("%d e maior que %d. \n", a, b);
    }
    else
    {
    printf("%d e maior que %d. \n", b, a);
    }

    return 0;
}