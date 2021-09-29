#include <iostream>
#include <locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL,"portuguese"); 
	int horas, nivel;
	double salario;
	
	cout << "\n Favor informar o nível como professor: ";
	cin >> nivel;
	cout << "\n Favor informar a quantidade de horas trabalhadas: ";
	cin >> horas;
	
	if (nivel == 1)
	{
		salario = horas * 12;
		cout << "\n COM BASE NAS " << horas << " HORAS TRABALHADAS E NO SEU NÍVEL COMO PROFESSOR VOCÊ VAI RECEBER " << salario << " REAIS";
	}
	else if (nivel == 2)
	{
		salario = horas * 15;
		cout << "\n COM BASE NAS " << horas << " HORAS TRABALHADAS E NO SEU NÍVEL COMO PROFESSOR VOCÊ VAI RECEBER " << salario << " REAIS";
	}
	else
	{
		salario = horas * 17;
		cout << "\n COM BASE NAS " << horas << " HORAS TRABALHADAS E NO SEU NÍVEL COMO PROFESSOR VOCÊ VAI RECEBER " << salario << " REAIS";
	}
	
	return 0;
}
