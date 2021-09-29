// Faça um algoritmo para calcular o valor a ser pago e o desconto de uma mercadoria. O algoritmo deverá solicitar o nome do produto, o valor unitário, a quantidade e a porcentagem de desconto. Após a realização das entradas calcular e mostrar o valor a pagar “Com desconto” e “Sem Desconto”

#include <stdio.h> 
#include <conio.h> 
#include <locale> 
#include <stdlib.h> 

int main()  
{ 	
	
	setlocale(LC_ALL,"portuguese");
	float peso, valor;
	
	printf("\n-----------------------------------------------");
	printf("\n          RESTAURANTE BEM-BÃO");
	printf("\n-----------------------------------------------");
	printf("\nFavor informar o peso do seu prato em Kg (MIN 1): ");
	scanf("%f", &peso);
	
		
	valor = (peso * 52);
	printf("\nO valor total do seu prato ficou %.2f", valor);
getch();
	
}
