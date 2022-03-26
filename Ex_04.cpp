#include <stdio.h>
#include <stdlib.h>

int filhos=0, contador_pessoas=0, contador_pessoas1500=0;
float salario=0, media_salario=0, media_filhos=0, porc_salario=0, maior_salario=0, porc=0;

int main()
{
    do
    {
        printf("\nPARA SAIR BASTA INFORMAR UM NÚMERO NEGATIVO");
        printf("\nINFORME SEU SALARIO: ");
        scanf("%f", &salario);
        if (salario >= 0) 
            {
            contador_pessoas++;
            media_salario = media_salario + salario;
            if(salario <= 1500)
            {
                contador_pessoas1500++;
            }
            if(salario>maior_salario)
            {
                maior_salario = salario;
            }
            printf("INFORME O NUMERO DE FILHOS: ");
            scanf("%d", &filhos);
            media_filhos = media_filhos + filhos;
            }
            else
                break;
    }while(1);
    porc = ((float) contador_pessoas1500*100)/contador_pessoas;
    printf("\nA MEDIA DO SALARIO DA POPULACAO E: %0.2f", media_salario/contador_pessoas);
    printf("A MEDIA DO NUMERO DE FILHOS: %0.1f", media_filhos/contador_pessoas);
    printf("MAIOR SALARIO: %0.2f\n", maior_salario);
    printf("A PORCENTAGEM DE PESSOAS C/ SALARIO ATE 1500: %0.1f\n", porc);

    return 0;
}