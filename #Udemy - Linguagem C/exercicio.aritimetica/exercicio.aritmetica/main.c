/****************
Natália Oliveira*
*****************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km_inicial, km_final, distancia;
    printf("Digite a quilometragem inicial: \n");
    scanf("%f", &km_inicial);
    printf("Agora digite a quilometragem final: \n");
    scanf("%f", &km_final);
    distancia = km_final - km_inicial;
    printf("A distancia percorrida foi de %f quilômetros.\n", distancia);

    return 0;
}
