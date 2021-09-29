// Faça um algoritmo para calcular o valor a ser pago e o desconto de uma mercadoria. O algoritmo deverá solicitar o nome do produto, o valor unitário, a quantidade e a porcentagem de desconto. Após a realização das entradas calcular e mostrar o valor a pagar “Com desconto” e “Sem Desconto”

#include <stdio.h> 
#include <conio.h> 
#include <locale> 
#include <stdlib.h> 

int main()  
{ 	
	
	setlocale(LC_ALL,"portuguese");
	int quant;
	float valor, desc, v_totS, v_totC, desconto;  
	char nome[50]; 
	
	
	printf("\nFavor informar nome do produto: "); 
	scanf("%s",&nome); 
	printf("\nFavor informar o valor do produto: ");
	scanf("%f",&valor);
	printf("\nFavor informar a quantidade do produto: ");
	scanf("%i",&quant);
	printf("\nFavor informar o desconto em %%: ");
	scanf("%f",&desc);
	
	v_totS = quant * valor;
	desconto = ((desc * v_totS)/100); 
	v_totC = v_totS - desconto; 
	
	printf("\nVocê está prestas a comprar %i %s", quant, nome);
	printf("\nE o valor total a pagar sem desconto é de %.2f e o valor total após calcular com o desconto introduzido é de %.2f", v_totS, v_totC);

 getch();
 

 	
}
