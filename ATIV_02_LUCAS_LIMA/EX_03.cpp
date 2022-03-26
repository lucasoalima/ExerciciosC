/* 3)	Declare uma estrutura (struct) capaz de criar variáveis para armazenar os seguintes dados:
Um funcionário composto de:
•	nome com no máximo 30 caracteres,
•	código de matrícula com exatamente 8 caracteres,
•	código do seu cargo profissional com exatamente 2 caracteres,
•	número de dependentes,
•	salário.
Após o cadastro listar na tela todos os funcionários que ganham salários superior a 2 salários mínimos (considere o salário mínimo R$937,00). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

struct funcionarios
{  
    char nome[40], codigo[8], codigo_p[2];
    int n_dependentes;
    float salario;
};

int main()
{
    int i, n;

    printf("Favor informar o numero de funcionarios que deseja consultar: ");
    scanf("%i", &n);    
	struct funcionarios f[n];
	
	
		
	setlocale(LC_ALL,"PORTUGUESE");
	for(i=0; i<n; i++)
	
{       printf("INFORMAR OS DADOS DO %iº FUNCIONÁRIO \n", i+1);
		fflush(stdin);
        printf("\nFavor informar o nome  do %iº funcionário: ",i+1);
        fflush(stdin);
	    gets(f[i].nome);
        printf("Favor informar o código de matricula do %iº funcionário:  ", i+1);
        fflush(stdin);
	    gets(f[i].codigo);
        printf("Favor informar o código do cargo profissional do %iº funcionário: ", i+1);
        fflush(stdin);
        gets(f[i].codigo_p);
        printf("Favor informar o numero de dependentes do %iº funcionário: ", i+1);
	    scanf("%d", &f[i].n_dependentes);
        printf("Favor informar o salário do %iº funcionário: ", i+1);
        scanf("%f", &f[i].salario);
	    system("cls");
    
}
system ("cls");
system ("color E4");

printf("\n\n\t#################### RELATORIO FUNCIONARIOS ########################\n\n\n");

for(i=0; i<n; i++)
{
        if(f[i].salario>=1874)
        {
         printf("\n\t              SALARIOS SUPERIORES A R$937.00\n\n");
         printf("\n\t####################  %iº FUNCIONARIO ########################\n\n",i+1);
         printf("\tNOME DO %iº FUNCIONARIO:%s\n", i+1, f[i].nome);
         printf("\tCODIGO DE MATRICULA DO %iº FUNCIONARIO:%s\n", i+1, f[i].codigo);
         printf("\tCODIGO DE PROFISSAO DO %iº FUNCIONARIO: %s\n", i+1, f[i].codigo_p);
         printf("\tNUMERO DE DEPENDENTES DO %iº FUNCIONARIO: %i\n", i+1, f[i].n_dependentes);
         printf("\tSALARIO DO %iº FUNCIONARIO: %.2f\n", i+1, f[i].salario);
         printf("\n\n\t#############################################################\n\n");
        }
}
system ("pause");

return 0;
}
