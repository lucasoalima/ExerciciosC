#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    int pessoas = 3, op = 0; 
	float idade_media_ruim = 0;
    int idade = 0, maior_idade_pessimo = 0, maior_idade_otimo = 0, maior_idade_ruim = 0;

	int resp[5] = 
	{
		0, 0, 0, 0, 0
	};

	for(int i = 0; i < pessoas; i++)
	{
		printf("FAVOR INFORMAR SUA IDADE:\n");
		scanf("%i", &idade);
		printf("ESCOLHA UMA OPÇAO: \n1 - OTIMO, \n2 - BOM, \n3 - REGULAR, \n4 - RUIM OU \n5 - PESSIMO:\n");
		scanf("%i", &op);
		switch(op)
		{
		case 2:
			resp[1]++;
			break;
		case 3:
			resp[2]++;
			break;
		case 4:
			idade_media_ruim += idade;
			if(idade > maior_idade_ruim)
			{
				maior_idade_ruim = idade;
			}
			resp[3]++;
			break;
		case 5:
			if(idade > maior_idade_pessimo)
			{
				maior_idade_pessimo = idade;
			}
			resp[4]++;
			break;
		default:
			if(idade > maior_idade_otimo)
			{
				maior_idade_otimo = idade;
			}
			resp[0]++;
			break;
		}
	}
	system("cls");
    system("color 0b");
	printf("QUANTIDADE DE OTIMOS: %i\n", resp[0]);

	int total = (resp[0] + resp[1] + resp[2] + resp[3] + resp[4]);
	float percentual_b = (float)resp[1] / (float)total * 100;
	float percentual_r = (float)resp[2] / (float)total * 100;
	float dif = percentual_b > percentual_r ? (float)(percentual_b - percentual_r) : (float)(percentual_r - percentual_b);
	printf("DIFERENCA ENTRE RESPOSTAS BOM E REGULAR: %.2f\n", dif);

	if(resp[3] != 0)
	{
		idade_media_ruim = (float)idade_media_ruim / (float)resp[3];
		printf("MEDIA DE IDADE DE PESSOAS QUE RESPONDERAM RUIM: %.2f\n", idade_media_ruim);
	}
	else
	{
		printf("MEDIA DE IDADE DE PESSOAS QUE RESPONDERAM RUIM: NENHUMA\n");
	}

	float perc_pess = (float)resp[4] / (float)total * 100;
	printf("PORCENTAGEM DE PESSIMOS: %.2f", perc_pess);
	printf(" MAIOR IDADE AO UTILIZAR OPCAO PESSIMO: %i\n", maior_idade_pessimo);

	return 0;
}