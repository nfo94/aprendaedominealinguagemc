/*****************
*Natália Oliveira*
*****************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float av1, av2, av3, media;
    printf("Digite a nota da primeira avaliacao: \n");
    scanf("%f", &av1);
    printf("Digite a nota da segunda avaliacao: \n");
    scanf("%f", &av2);
    printf("Digite a nota da terceira avaliacao: \n");
    scanf("%f", &av3);
    media = (av1 + av2 + av3) / 3;
    printf("A media do aluno foi de %.1f. \n", media);

    return 0;
}
