#include <iostream>
#include <locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL,"portuguese");
	double preco1, preco_f, imposto, valor;
	int uf;
	
	cout << "\n Favor informar o valor do produto: ";
	cin >> valor;
	cout << "\n FAVOR DIGITAR SEU ESTADO, SABENDO QUE SP = 1 , MG = 2, RJ = 3 E MS = 4...";
	cin >> uf;
	
	if (uf == 1)
	{
		imposto = (valor * 7)/100; 
		preco_f = valor + imposto; 
	}
	else if (uf == 2)
	{
		imposto = (valor * 12)/100;
		preco_f = valor + imposto;
	}
	else if (uf == 3)
	{
		imposto = (valor * 15)/100;
		preco_f = valor + imposto;
	}
	else
	{
		imposto = (valor * 8)/100;
		preco_f = valor + imposto;
	}
	
		cout << "\n COM BASE NO SEU ESTADO O PRECO DO PRODUTO SOMADO AO DO IMPOSTO É DE " << preco_f;
	
	return 0;
}
