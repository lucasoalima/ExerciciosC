#include <stdlib.h>
#include <stdio.h>
int main()
{

int numero, primeiro_numero, metade, par=0, maior=0, menornumero, maiornumero;

printf("\nQUANDO DESEJAR SAIR DO PROGRAMA BASTA DIGITAR A METADE DO PRIMEIRO NUMERO INFORMADO");
printf("\nINFORME O PRIMEIRO NUMERO: \n");
scanf("%i", &primeiro_numero);

maiornumero=primeiro_numero;
menornumero=primeiro_numero;

if(primeiro_numero %2==0){
par++;
}

metade = primeiro_numero/2;
do{

printf("\nINFORME AGORA OS PRÓXIMOS NUMEROS\n");
scanf("%i", &numero);

if(numero %2==0)
{
par++;
}
if(numero > primeiro_numero)
{
maior++;
}

if(numero >= maiornumero)
{
maiornumero=numero;
}
if(numero <= menornumero)
{
menornumero=numero;
}
}while (numero != metade);

printf("\nNUMEROS PARES: %i.", par);
printf("\nNUMEROS MAIORES QUE O 1º: %i.", maior);
printf("\nMAIOR NUMERO INFORMADO: %i", maiornumero);
printf("\nMENOR NUMERO INFORMADO: %i", menornumero);
}	