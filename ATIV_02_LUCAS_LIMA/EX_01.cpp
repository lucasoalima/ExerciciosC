/* 1)	Considerando que para um consórcio, sabe-se o número total de prestações, a quantidade de prestações paga e o valor atual da prestação. Crie uma função que faça o cálculo e retorne ao consorciado o saldo devedor. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

float soma (float a, float b, float c)
{
    float result;
    float result2;

    result2 = a - b;
    result = result2 * c;
    return result;
}


int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    float v_atual, saldo;
    int n_prest, prest_p;

    printf("\n --------------------------------------");
    printf("\n C A L C U L O  D E  C O N S O R C I O");
    printf("\n --------------------------------------");
    printf("\n FAVOR INFORMAR O NÚMERO DE PRESTAÇÕES: ");
    scanf("%i", &n_prest);
    printf("\n FAVOR INFORMAR A QUANTIDADE DE PRESTAÇÕES JÁ PAGA: ");
    scanf("%i", &prest_p);
    printf("\n AGORA FAVOR INFORMAR O VALOR DAS PRESTAÇÕES: ");
    scanf("%f", &v_atual);

    saldo = soma(n_prest, prest_p, v_atual);
    system("cls");
    system ("color E4");

    printf("\nSALDO DEVEDOR: %.2f R$:", saldo);

    system("pause");
    return 0;
}