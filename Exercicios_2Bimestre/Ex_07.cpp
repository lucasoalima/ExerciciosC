#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int quant, i, id, magro_id, magro_peso, gordo_peso, gordo_id, peso;

    printf("QUANTIDADE DE BOIS: ");
    scanf("%d", &quant);

    printf("CODIGO DO BOI: ");
    scanf("%d", &id);
    magro_id = id;
    gordo_id = id;

    printf("PESO DO BOI: ");
    scanf("%d", &peso);
    magro_peso = peso;
    gordo_peso = peso;

    for (i = 1; i < quant; i++) 
        {
        printf("CODIGO DO BOI: ");
        scanf("%d", &id);
        printf("PESO DO BOI: ");
        scanf("%d", &peso);

        if (peso < magro_peso) 
        {
            magro_id = id;
            magro_peso = peso;
        }
        if (peso > gordo_peso) 
        {
            gordo_id = id;
            gordo_peso = peso;
        }
        system("cls");
    }

    printf("BOI GORDO ID: %d PESO: %d\n", gordo_id, gordo_peso);
    printf("BOI GORDO ID: %d PESO: %d\n", magro_id, magro_peso);

    system("PAUSE");
    return 0;
}