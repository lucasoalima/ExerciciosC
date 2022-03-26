#include <stdio.h>
#include <stdlib.h>

int main()
{
int genero, idade, alunas_info=0, total_alunos18e25=0, area=0, continuar=1, contador=0, i=1, soma_idade_alunos=0.0;
float media, porcentagem;

while(continuar)
    {
        printf("\nALUNO. %d \nFAVOR INFORMAR A IDADE: ", i);
        scanf("%d", &idade);
        printf("SEXO M OU F: (1) P/ MASCULINO (2) P/FEMININO ");
        scanf("%i", &genero);
        printf("AREA ESCOLHIDA (1) P/ INFORMATICA | (2) P/ MARKETING | (3) P/ LOGISTICA | (4) P/ WEB DESIGN: ");
        scanf("%d", &area);
        if(idade > 18 && idade < 25 && area== 2 || area ==3)
            total_alunos18e25++;
            soma_idade_alunos = soma_idade_alunos + idade; 
        if(area == 1 && genero == 2)
        {
            alunas_info++;
        }
        contador++;
        i++;

        printf("\nCONTINUAR?");
        printf("\nDIGITE 1 P/ CONTINUAR E 0 P/SAIR: \n");
        scanf("%d", &continuar);

		system("cls");
    }
        media = soma_idade_alunos/total_alunos18e25;
        porcentagem = alunas_info*100/contador;

    printf("\n PORCENTAGEM DE ALUNAS INSCRITAS NO CURSO DE INFORMATICA: %.2f", porcentagem);
    printf("\n MEDIA DE IDADE DOS ALUNOS DE MARKETING E LOGISTICA DE 18 E 25 ANOS: %.2f", media);
}


