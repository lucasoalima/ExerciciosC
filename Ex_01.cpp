#include <stdio.h>
#include <locale>
#include <stdlib.h>

int main()
{
    float altura, peso_ideal;
    char genero;

    printf("\n FAVOR INFORMAR SUA ALTURA: ");
    scanf("%f", &altura);
    printf("\n FAVOR INFORMAR SEU GENERO M OU F: ");
    scanf("%s", &genero);

    if (genero == 'M' || genero == 'm')
    {
        peso_ideal = (72.7 * altura) - 58;
    }
    else if (genero == 'F' || genero == 'f')
    {
        peso_ideal = (62.1 * altura) - 44.7;
    }
    else
    {
        printf("ERRO");
    }
    printf("O PESO IDEAL COM BASE NAS INFORMACOES DADAS E: %.2f", peso_ideal);

return 0;

}

