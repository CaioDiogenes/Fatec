/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-------------------\n");
	printf("-- Exe 12: Notas --\n");
	printf("-------------------\n");

	const int NUMEROAULASMINISTRADASSEMESTRE = 80;
	const float PERCENTUALLIMITEFALTAS = 25;
	const float MEDIAAPROVACAO = 7;
	const int NUMERONOTAS = 3;

    float nota1, nota2, nota3, media, percentualFaltas;
    int faltas;

    printf("\nN�mero de aulas no semestre....... %d.", NUMEROAULASMINISTRADASSEMESTRE);
    printf("\nPercentual de faltas permitido.... %.2f.", PERCENTUALLIMITEFALTAS);
    printf("\nM�dia para aprova��o.............. %.2f.\n\n", MEDIAAPROVACAO);

    printf("Informe o n�mero de faltas: ");
    scanf("%i", &faltas);

    //faltas -> tipo inteiro
    //NUMEROAULASMINISTRADASSEMESTRE -> tipo inteiro
    //100 -> tipo inteiro
    //contas com inteiros resultam em inteiros. PERIIIIIIIIIIIIIGGGGGOOOOOOOOoooo!!!!!! =(
    //Por isso, a convers�o para float. =)
    //Fa�a o teste. Tire a convers�o e teste o programam em modo debug. Observe o valor de percentualFaltas. =)
    percentualFaltas = (float) faltas / NUMEROAULASMINISTRADASSEMESTRE * 100;

    if (percentualFaltas > PERCENTUALLIMITEFALTAS){
        printf("\nReprovado por falta.\n");
    }else{
        printf("\nDigite a nota 1:");
        scanf("%f", &nota1);

        printf("Digite a nota 2:");
        scanf("%f", &nota2);

        printf("Digite a nota 3:");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / NUMERONOTAS;

        printf("\nM�dia: %.2f\n", media);

        if (media < MEDIAAPROVACAO){
            printf("\nReprovado por m�dia.\n");
        }else{
            printf("\nAprovado.\n");
        }
    }

	return(0);
}
*/
