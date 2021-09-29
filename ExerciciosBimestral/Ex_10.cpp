#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int area, sexo, cartao;
	double preco;
	
	cout << "\n ------ INFORMAR APENAS COM DIGITOS: ------ ";
	cout << "\n FAVOR INFORMAR A ÁREA DO INGRESSO (A) = 1 OU (B) = 2: ";
	cin >> area;
	cout <<"\n INFORMAR O SEXO (M) = 1 OU (F) = 2: ";
	cin >> sexo;
	cout << "\n CLIENTE POSSUI CARTÃO FIDELIDADE (S) = 1 OU (N) = 2: ";
	cin >> cartao;
	
	if (area == 1 && sexo == 1 && cartao == 1)
	{
		cout << "\n O PREÇO TOTAL DO INGRESSO FICOU 150.00";
	}
	else if (area == 1 && sexo == 1 && cartao == 2)
	{
		cout << "\n O PREÇO TOTAL DO INGRESSO FICOU 200.00";
	}
	else if (area == 1 && sexo == 2 && cartao == 1)
	{
		cout << "\n O PREÇO TOTAL DO INGRESSO FICOU 100.00";
	}
	else if (area == 1 && sexo == 2 && cartao == 2)
	{
		cout << "\n O PREÇO TOTAL DO INGRESSO FICOU 150.00";
	}
	
	
	if (area == 2 && sexo == 1 && cartao == 1)
	{
		cout << "\n O PREÇO TOTAL DO INGRESSO FICOU 100.00";
	}
	else if (area == 2 && sexo == 1 && cartao == 2)
	{
		cout << "\n O PREÇO TOTAL DO INGRESSO FICOU 150.00";
	}
	else if (area == 2 && sexo == 2 && cartao == 1)
	{
		cout << "\n O PREÇO TOTAL DO INGRESSO FICOU 50.00";
	}
	else if (area == 2 && sexo == 2 && cartao == 2)
	{
		cout << "\n O PREÇO TOTAL DO INGRESSO FICOU 100.00";
	}
	
	return 0;
}
