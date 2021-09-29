#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL,"portuguese");
	float distancia, litros, consumo;
	
	printf("\nFavor informar a distância percorrida pelo seu carro: ");
	scanf("%f", &distancia);
	printf("\nFavor informar a quantidade de litros consumida pelo seu carro durante o percurso: ");
	scanf("%f", &litros);
	
	consumo = distancia / litros;
	
	if (consumo <= 8)
	{
		printf("\n VENDA O CARRO!");
	}
	else if (consumo <= 14)
	{
		printf("\n CARRO ECONÔMICO");
	}
	else
	{
		printf("\n CARRO SUPER ECONÔMICO");
	}
	
}
