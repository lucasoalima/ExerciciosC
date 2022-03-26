/* 1)	Na cidade de Curitiba existe uma variação bem grande de temperaturas. Em Setembro de 2021 as temperaturas variaram entre 8 graus e 29 graus. Faça um algoritmo em Portugol (ou um programa em C) que armazene em um Vetor a temperatura média de cada dia do mês de setembro, após apresente:

a) Um relatório da temperatura média de cada dia;
b) A temperatura média do mês de setembro;
c) O número de dias nos quais a temperatura foi inferior à temperatura média. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    int i, N;


    printf("Informe o número de dias do mês:");
    scanf("%i", &N);
    float temp[N]; 
    float temp_media, soma=0;
    int inferior=0;

    printf("\n\n############## INFORMANDO AS TEMPERATURAS #################\n\n");
    for (i= 0; i< N; i++)
    {
        printf("Digite quantos graus fazia no dia %iº: ", i+1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }
    
    temp_media = soma/N;

    system("cls");
    system("color 0b");
    printf("\n\n################# RELATORIO DE TEMPERATURAS ##############\n\n");

    for (i=0; i<N; i++)
    {
        printf("\n No dia %i fez %.2f graus.", i+1, temp[i]);
        if(temp[i] < temp_media)
        {
            inferior++;
        }
    }

    printf("\n\n A TEMPERATURA MÉDIA É DE: %.2f", temp_media);
    printf("\n\n NUMERO DE DIAS QUE A TEMPERATURA FOI MENOR QUE A MEDIA: %i", inferior);

    system("pause");

    return 0;
}