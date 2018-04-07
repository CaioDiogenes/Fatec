#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

	printf("-------------------\n");
	printf("-- Exe12: Escola --\n");
	printf("-------------------\n");

	const float pesoProva = 0.7, pesoTrabalho = 0.3;
	float p1 = 0, p2 = 0, t1 = 0, t2 = 0, media = 0;

	printf("Informe as notas do aluno para:");
	printf("\n\n");

	printf("Primeira prova (P1):");
	scanf("%f", &p1);
	printf("Primeiro Trabalho (T1):");
	scanf("%f", &t1);

	printf("\n");

	printf("Segunda prova (P2):");
	scanf("%f", &p2);
	printf("Segundo Trabalho (T2):");
	scanf("%f", &t2);

	media = (p1 * pesoProva + t1 * pesoTrabalho + p2 * pesoProva + t2 * pesoTrabalho) / 2;

	printf("\nA média foi: %.2f. Portanto, o aluno está: ", media);
    if (media >= 6){
        printf("APROVADO!\n");
    }else{
        printf("REPROVADO!\n");
    }

    return (0);
}
