#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, idade, idade_menor170 = 0, quant_menor170 = 0, quant_maior20 = 0;
    float idadeMedia, alturaMedia, altura, alturaMais20 = 0;

    for(i = 1; i <= 45; i++){
        printf("DIGITE A IDADE DO ALUNO: \n");
        scanf("%d", &idade);
        printf("DIGITE A ALTURA DO ALUNO: \n");
        scanf("%f", &altura);

        if(altura < 1.7){
            idade_menor170 += idade;
            quant_menor170++;
        }
        if(idade > 20){
            alturaMais20 += altura;
            quant_maior20++;
        }
    }
    idadeMedia = (float)idade_menor170 / quant_menor170;
    alturaMedia = alturaMais20 / quant_maior20;
    printf("Idade media dos alunos com menos de 1,70m de altura: %.2f\n", idadeMedia);
    printf("Altura media dos alunos com mais de 20 anos: %.2f\n", alturaMedia);
}