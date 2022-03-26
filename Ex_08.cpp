#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i, contador=1;
    float tamanho, peso, bebe_maior, bebe_pesado;

    printf("\nINFORMAR A QUANTIDADE DE BEBES QUE SERAO CONSULTADOS: \n");
    scanf("%d", &quant);
    for (i=1; i <= quant; i++)
    {
        printf("ALTURA DA %i CRIANCA: ", contador);
        scanf("%f", &tamanho);
        printf("PESO DA %i CRIANCA: ", contador);
        scanf("%f", &peso);

        bebe_maior = tamanho;
        bebe_pesado = peso;

        if (peso > bebe_pesado) 
        {
            bebe_pesado = peso;
        }
        if (tamanho > bebe_maior) 
        {
            bebe_maior = tamanho;
        }
        contador++;
        system("cls");
    }

    printf("\nO MAIOR PESO REGISTRADO FOI DE : %.2f", bebe_pesado);
    printf("\nO MAIOR TAMANHO REGISTRADO FOI DE : %.2f", bebe_maior);

    system("PAUSE");
    return 0;
}