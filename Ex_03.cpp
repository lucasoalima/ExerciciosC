#include<stdio.h>
#include<stdlib.h>

int main(){

	float i,peso,med1=0,med2=0,med3,med4,soma[4]={0,0,0,0},y[4]={0,0,0,0};
	int x;

	for(x=1;x<=15;x++)
	{
		printf("\nDigite a idade da %d pessoa: ",x);
		scanf("%f",&i);
		printf("Digite o peso da %d pessoa: ",x);
		scanf("%f",&peso);


		if(i>=1&&i<=10)
        {
			y[0]=y[0]+1;
			soma[0]=soma[0]+peso;
			med1=soma[0]/y[0];
		}
		if(i>=11&&i<=20)
        {
	        y[1]=y[1]+1;
	        soma[1]=soma[1]+peso;
	        med2=soma[1]/y[1];		
		}
		if(i>=21&&i<=30)
        {
	        y[2]=y[2]+1;
	        soma[2]=soma[2]+peso;
	        med3=soma[2]/y[2];

		}
		if(i>=31)
        {
	        y[3]=y[3]+1;
	        soma[3]=soma[3]+peso;
	        med4=soma[3]/y[3];	
		}
        system("cls");		
	}

	printf("\nA MEDIA DE PESO ENTRE 1 E 10 ANOS  = %.2f\n",med1);
	printf("\nA MEDIA DE PESO ENTRE 11 E 20 ANOS  = %.2f\n",med2);
	printf("\nA MEDIA DE PESO ENTRE 21 E 30 ANOS = %.2f\n",med3);
	printf("\nA MEDIA DE PESO MAIOR QUE 30 ANOS = %.2f\n",med4);

	system("pause");
	return(0);
}