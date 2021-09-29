#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	double valor_f, consumo, consumo_mesAtu, consumo_mesAnt, esgoto, valor_conta;
	
	cout << "\n FAVOR INFORMAR O CONSUMO DE ÁGUA DO MÊS ANTERIOR: ";
	cin >> consumo_mesAnt;
	cout << "\n FAVOR INFORMAR O CONSUMO DE ÁGUA DO MÊS ATUAL: ";
	cin >> consumo_mesAtu;
	
	consumo = consumo_mesAtu - consumo_mesAnt;
	
	if  (consumo <= 10)
	{
		valor_f = (consumo * 0.69) + 5;
	}
	else if  (consumo <= 15)
	{
		valor_f = (1.17 * consumo) + 5;
	}
	else if (consumo <= 25)
	{
		valor_f = (1.48 * consumo) + 5;
	}
	else
	{
		valor_f = (1.60 * consumo) + 5; 
	}	
	
		esgoto = (valor_f * 2.5)/100;
		valor_conta = valor_f + esgoto;
		
		cout << "\n VALOR CONSUMIDO: " << valor_f;
		cout << "\n TARIFA DO ESGOTO: " << esgoto;
		cout << "\n CONSUMO: " << consumo;
		cout << "\n VALOR TOTAL A SE PAGAR NESSE MÊS É DE: " << valor_conta;
}

