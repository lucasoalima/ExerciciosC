/* 2)	O guichê de pedágio de uma rodovia possui um equipamento que registra diariamente a quantidade de carros que ali passaram. Faça um algoritmo para ler cada registro do mês de setembro (30 dias) e guardar em um vetor. Após armazenar os valores, obtenha qual o dia passou o maior volume de carros e quantos carros passaram neste dia. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    int i, dia[30], maior=0;
    float soma=0;

    printf("\n\n############## RODOVIARIA #################\n\n");
    
    for (i= 0; i<= 30; i++)
    {
        printf("INFORMAR QUANTOS CARROS PASSARAM NO DIA %iº: ", i+1);
        scanf("%i", &dia[i]);
        if(dia[i] > maior)
        {
            maior = dia[i];
        }
    }

    system("cls");
    system("color 0b");
    printf("\n\n################# RELATORIO ##############\n\n");

    for (i=0; i<= 30; i++)
    {
        printf("\n No dia %i passou %i carros.", i+1, dia[i]);
    }

    printf("\n O MAIOR NUMERO DE CARROS FOI DE: %i\n\n", dia[i]);

    system("pause");

    return 0;
}