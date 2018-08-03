/*****************
*Natália Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

//programa para calcular o volume de uma lata de azeite cilíndrica -> vol = 3.14 * (raio*raio) * altura

int main()
{
    float raio, altura, vol, pi;
    printf("Digite o raio do fundo da lata: \n");
    scanf("%f", &raio);
    printf("Digite a altura da lata: \n");
    scanf("%f", &altura);
    pi = 3.14;
    vol = pi * (raio * raio) * altura;
    printf("O volume da lata eh de %f. \n", vol);

    return 0;
}
