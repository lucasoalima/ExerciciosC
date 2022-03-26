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

struct apartamento
{  
    char nome[100];
    int n_moradores, numero, tot_moradores=0;
    float aluguel, area;
};

int main()
{
    int i, n, tot_moradores=0;

    printf("Favor informar o numero de apartamentos que deseja cadastrar: ");
    scanf("%i", &n);    
	struct apartamento f[n];
	
	
		
	setlocale(LC_ALL,"PORTUGUESE");
	for(i=0; i<n; i++)
	
{       printf("INFORMAR OS DADOS DO %iº APARTAMENTO \n", i+1);
		fflush(stdin);
        printf("\nFavor informar o nome  do %iº responsável: ",i+1);
        fflush(stdin);
	    gets(f[i].nome);
        printf("Favor informar o número do %iº apartamento:  ", i+1);
        scanf("%i", &f[i].numero);
        printf("Favor informar a área(m2) do %iº apartamento: ", i+1);
        scanf("%f", &f[i].area);
        printf("Favor informar o numero de moradores do %iº apartamento: ", i+1);
	    scanf("%i", &f[i].n_moradores);
        printf("Favor informar o aluguel do %iº apartamento: ", i+1);
        scanf("%f", &f[i].aluguel);

        tot_moradores = tot_moradores + f[i].n_moradores;
	    system("cls");
    
}
system ("cls");
system ("color E4");

printf("\n\n\t#################### RELATORIO DO CONDOMINIO ########################\n\n\n");

for(i=0; i<n; i++)
{
         printf("\n\t                   DADOS DOS APARTAMENTOS\n\n");
         printf("\n\t####################  %iº APARTAMENTO ########################\n\n",i+1);
         printf("\tNOME DO RESPONSAVEL DO %iº APARTAMENTO: %s\n", i+1, f[i].nome);
         printf("\tNUMERO DO %iº APARTAMENTO:%i\n", i+1, f[i].numero);
         printf("\tAREA(m2) DO %iº APARTAMENTO: %.2f METROS\n", i+1, f[i].area);
         printf("\tNUMERO DE MORADORES DO %iº APARTAMENTO: %i\n", i+1, f[i].n_moradores);
         printf("\tALGUEL DO %iº APARTAMENTO: %.2f\n", i+1, f[i].aluguel);
         printf("\n\n\t#############################################################\n\n");
}

        printf("\n\t                   DADOS DO CONDOMINIO             \n\n");
        printf("\tNUMERO TOTAL DE MORADORES DO CONDOMINIO: %i", tot_moradores);

system ("pause");

return 0;
}
