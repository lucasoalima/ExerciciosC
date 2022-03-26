#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	
	int codigo, unidades, opcao, unidades1=0, unidades2=0, unidades3=0, unidades4=0, unidades5=0, unidadesR=0, codigosFalhas=0;
	double totalPagar=0, total1=0, total2=0, total3=0, total4=0, total5=0, totalR=0;
	
	
	do{
		cout << "--------|---|---------\n";
		cout << "PRATO 1 | 1 | R$ 1.20 \n";
		cout << "PRATO 2 | 2 | R$ 1.30 \n";
		cout << "PRATO 3 | 3 | R$ 1.50 \n";
		cout << "PRATO 4 | 4 | R$ 1.20 \n";
		cout << "PRATO 5 | 5 | R$ 1.30 \n";
		
		cout << "CODIGO DO PRODUTO: ";
		cin >> codigo;
		cout << "UNIDADES: ";
		cin >> unidades;
		
		while(unidades <= 0)
		{
			cout << "UNIDADE NAO PODE SER 0 \n";
			cout << "UNIDADES: ";
			cin >> unidades;
		}	
		switch(codigo){
				case 1:
						cout << "******************************************************* \n";
						cout << "         COMPRANDO "<< unidades <<" DE PRATO 1 \n";
						cout << "******************************************************* \n";
						cout << "\n";
						unidades1 = unidades1 + unidades;
						totalPagar = totalPagar + ( unidades * 25.90);
						total1 = total1 + (unidades * 25.90);
						break;
					
				case 2:
						cout << "******************************************************* \n";
						cout << "           COMPRANDO "<< unidades <<" DE PRATO 2 \n";
						cout << "******************************************************* \n";
						cout << "\n";
						unidades2 = unidades2 + unidades;
						totalPagar = totalPagar + (unidades * 33.90) ;
						total2 = total2 + (unidades * 33.90);
						break;
						
				case 3:
						cout << "******************************************************* \n";
						cout << "           COMPRANDO "<< unidades <<" DE PRATO 3 \n";
						cout << "******************************************************* \n";
						cout << "\n";
						unidades3 = unidades3 + unidades;
						totalPagar = totalPagar + (unidades * 44.90);
						total3 =  total3 + (unidades * 44.90);
						break;
						
				case 4:
						cout << "******************************************************* \n";
						cout << "          COMPRANDO "<< unidades <<" DE PRATO 4 \n";
						cout << "******************************************************* \n";
						cout << "\n";
						unidades4 = unidades4 + unidades;
						totalPagar = totalPagar + (unidades * 50.99);
						total4 = total4 + (unidades * 50.99);
						break;
						
				case 5:
						cout << "******************************************************* \n";
						cout << "          COMPRANDO "<< unidades <<" DE PRATO 5 \n";
						cout << "******************************************************* \n";
						cout << "\n";
						unidades5 = unidades + unidades;
						totalPagar = totalPagar + (unidades * 75.00 );
						total5 = total5 + (unidades * 75.00);
						break;
						
				default:
						cout << "ERRO ~~ CODIGO DE PRODUTO ERRADO \n";
						cout << "\n";
						codigosFalhas = codigosFalhas + 1;
						break;
		}
		cout << "SELECIONE 1/ ADICIONAR MAIS PRODUTOS E P/ SAIR(0) \n";
		cout << "OPCAO: ";
		cin >> opcao;
		
		
		while((opcao != 0) && (opcao !=1))
		{
			cout << "ERRO \n";
			cout << "SELECIONA 1/P ADICIONAR 0 P/SAIR: ";
			cin >> opcao;
		}
	}while(opcao != 0);
	
	cout << "        COMPROVANTE DE COMPRA        \n";
	cout << "CODIGO   | UNIDADES | TOTAL   \n";
	cout << "----------|---|---------\n";
	cout << "PRATO 1   |   ["<<unidades1<<"]    | R$ "<<total1<< endl;
	cout << "PRATO 2   |   ["<<unidades2<<"]    | R$ "<<total2<< endl;
	cout << "PRATO 3   |   ["<<unidades3<<"]    | R$ "<<total3<< endl;
	cout << "PRATO 4   |   ["<<unidades4<<"]    | R$ "<<total4<< endl;
	cout << "PRATO 5   |   ["<<unidades5<<"]    | R$ "<<total5<< endl;
	cout << "-------------------------------------\n";
	cout << "                             R$"<< totalPagar << endl;
	cout << "                                     \n";
	
	return 0;
}