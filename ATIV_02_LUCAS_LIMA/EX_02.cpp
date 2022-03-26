#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

float soma (float a, float b)
{
    float result;
    float result2;

    result2 = a + b;

    if(result2 <= 1100)
    {
        result = result2 * 0.075;

    return result;
    }
    else if(result2 <= 2203.48)
    {
        result = result2 * 0.09;

    return result;
    }
    else if(result2 <= 3305.22)
    {
        result = result2 * 0.12;

    return result;
    }
    else if(result2 <= 6433.57)
    {
        result = result2 * 0.14;

    return result;
    }
    else
    {
        result = result2 * 0.14;
    }
}
int main()
{
    float sal, inss, bonus;

    printf("\n =================================");
    printf("\n|           I N S S              |");
    printf("\n =================================");

    printf("\n BEM VINDO AO CALCULO DE INSS, FAVOR INFORMAR O SALARIO TOTAL DO FUNCIONARIO: ");
    scanf("%f", &sal);
    printf("\n FAVOR INFORMAR O BONUS/HRS EXTRA DO FUNCIONARIO: ");
    scanf("%f", &bonus);

    system("cls");
    system ("color E4");

    inss = soma(sal, bonus);

    printf("\n VALOR DE INSS A SER PAGO PELO FUNCIONARIO: %.2f R$\n", inss);

    system("pause");
    return 0;
}