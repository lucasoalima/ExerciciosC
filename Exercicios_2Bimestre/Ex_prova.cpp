#include <stdio.h>
#include <stdlib.h>

int main()
{
    //i equivale quantidade de alunos
    char genero;
    int idade, dificuldade, doenca, continuar=1, alunos_doentes=0, alunos_sintoma=0, total_alunos_sintoma=0, total_alunos_doentes=0;


    while(continuar)
    {
        printf("\nSEXO DO ALUNO: (M) OU (F) \n");
        scanf("%s", &genero);
        printf("\nIDADE: \n");
        scanf("%i", &idade);
        printf("\nDIFICULDADE EM RESPIRAR? 1 P/SIM | 2P/NAO: ");
        scanf("%i", &dificuldade);
        printf("\nALUNO TEM DOENCA? 1 P/SIM | 2P/NAO: ");
        scanf("%i", &doenca);

        if(dificuldade == 1)
            
            alunos_sintoma++;
            total_alunos_sintoma = alunos_sintoma;

        if(doenca == 1)
        {
            alunos_doentes++;
            total_alunos_doentes = alunos_doentes;
        }

        printf("\nCONTINUAR?");
        printf("\nDIGITE 1 P/ CONTINUAR AS ENTREVISTAS E 0 P/SAIR: \n");
        scanf("%d", &continuar);

        system("cls");
    }

        printf("\nALUNOS DOENTES: %i \nALUNOS COM DIFICULDADE: %i", total_alunos_doentes, total_alunos_sintoma);
}