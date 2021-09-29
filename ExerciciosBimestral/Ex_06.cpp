#include <iostream>
#include <locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL,"portuguese");
	string nome; 
	int quant;
	double preco, total, desconto, total_pagar;
	
	cout << "\n Favor digitar o nome do produto adquirido: ";
	cin >> nome;
	cout << "\n Favor informar a quantidade adquirida: ";
	cin >> quant;
	cout << "\n Favor informar o preço unitário do produto: ";
	cin >> preco;
	
	total = quant * preco;
	if (quant <= 5)
		{
			desconto = (total * 2)/100;
			total_pagar = total - desconto;
			cout << "\n VOCÊ COMPROU : " << nome << " O TOTAL A PAGAR APÓS O DESCONTO É : " << total_pagar;
		}
	else if (quant > 5 && quant <= 10)
		{
			desconto = (total * 3)/100;
			total_pagar = total - desconto;
			cout << "\n VOCÊ COMPROU : " << nome << " O TOTAL A PAGAR APÓS O DESCONTO É :" << total_pagar;
		}
	else
		{
			desconto = (total * 5)/100;
			total_pagar = total - desconto;
			cout << "\n VOCÊ COMPROU : " << nome << " O TOTAL A PAGAR APÓS O DESCONTO É :" << total_pagar;
		}
	
	return 0;
}
