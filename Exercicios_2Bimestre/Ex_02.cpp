#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade, i=1, continuar=1, idade_superior50=0, num_pessoas10e20=0, contador=0;
    float altura, peso, peso_menor40=0.0, soma_altura10e20=0.0;

    while(continuar)
    {
        printf("\nPESSOA. %d \nFAVOR INFORMAR A IDADE: ", i);
        scanf("%d", &idade);
        printf("ALTURA: ");
        scanf("%f", &altura);
        printf("PESO: ");
        scanf("%f", &peso);
        if(idade > 50)
            idade_superior50++;
        if(idade >= 10 && idade <= 20)
        {
            soma_altura10e20 += altura;
            num_pessoas10e20++;
        }
        if(peso < 40)
            peso_menor40++;

        contador++;
        i++;

        printf("\nCONTINUAR?");
        printf("\nDIGITE 1 P/ CONTINUAR E 0 P/SAIR");
        scanf("%d", &continuar);

		system("cls");
    }
    printf("\nPESSOAS COM IDADE SUPERIOR A 50: %d", idade_superior50);
    if(num_pessoas10e20 == 0)
        num_pessoas10e20 = 1;
    printf("\nMEDIA DAS ALTURAS: %.2f", soma_altura10e20/num_pessoas10e20);
    printf("\nPORCENTAGEM DE PESSOAS COM PESO INFERIOR A 40: %.2f%%\n", peso_menor40*100/contador);
}