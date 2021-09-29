#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int ano;
	float preco, imposto;
	
	printf("\n---------------------------------");
	printf("\n     DETRAN ESTADO DE MG       ");
	printf("\n---------------------------------");
	
	printf("\nFavor informar o ano do carro: ");
	scanf("%i", &ano);
	printf("\nAgora favor informar o preço do carro: ");
	scanf("%f", &preco);
	
	if (ano<1900)
	{
		imposto = (preco * 1)/100;
		printf("\nO TOTAL DE IMPOSTO A SER PAGO É DE %.2f R$", imposto);
	}
	else
	{
		imposto = (preco * 1.5)/100;
		printf("\nO TOTAL DE IMPOSTO A SER PAGO É DE %.2f R$", imposto);
	}
	
}

