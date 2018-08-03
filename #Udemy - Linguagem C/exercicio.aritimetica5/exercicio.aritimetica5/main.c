/*****************
*Natália Oliveira*
*****************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoDeNascimento, anosDeVida;
    printf("Digite seu ano de nascimento: \n");
    scanf("%d", &anoDeNascimento);
    anosDeVida = 2017 - anoDeNascimento;
    printf("Voce tem %d anos de vida. \n", anosDeVida);

    int dias, horas, minutos, segundos;
    dias = anosDeVida * 365;
    printf("Tem %d dias de vida... \n", dias);
    horas = dias * 24;
    printf("Tem %d horas de vida... \n", horas);
    minutos = horas * 60;
    printf("Tem %d minutos de vida... \n", minutos);
    segundos = minutos * 60;
    printf("E, finalmente, tem %d", segundos);
    system("pause");

    return 0;
}
