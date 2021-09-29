#include <stdio.h> 
#include <conio.h> 
#include <locale> 
#include <stdlib.h> 

int main()  
{ 	
	
	setlocale(LC_ALL,"portuguese");
	float preco_fabrica, preco_final, preco_imposto, preco_vendedor;
	char carro[50];
	
	printf("\n-----------------------------------------------");
	printf("\n          CONCESSIONÁRIA DE VEICULOS ");
	printf("\n-----------------------------------------------");
	printf("\nFavor informar o nome do carro: ");
	scanf("%s", &carro);
	printf("\nAgora informe o valor do %s: ", carro);
	scanf("%f", &preco_fabrica);
	
 	preco_imposto = (preco_fabrica * 45)/100;
 	preco_vendedor = (preco_fabrica * 28)/100;
 	preco_final = preco_fabrica + preco_imposto + preco_vendedor;
 	
 	printf("\nVocê está prestes a comprar um %s", carro);
 	printf("\nO valor final dele após calcular impostos e comissões acabou ficando %.2f", preco_final);

getch();
	
}
