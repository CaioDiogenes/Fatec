/*
#include<stdio.h>
#include <locale.h>

// Faça o teste de mesa desse programa para você entender. =)

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("------------------\n");
	printf("-- Exe 15: Jogo --\n");
	printf("------------------\n");

	const int minutosDia = 1440;
	const int minutosHora = 60;

	int horasInicio, minutosInicio, horasTermino, minutosTermino;
	int tempoEmMinutos;

	printf("Informe o ínicio do jogo:\n");
	printf("\tHoras...... ");
	scanf("%d", &horasInicio);
	printf("\tMinutos.... ");
	scanf("%d", &minutosInicio);

	printf("Informe o término do jogo:\n");
	printf("\tHoras...... ");
	scanf("%d", &horasTermino);
	printf("\tMinutos.... ");
	scanf("%d", &minutosTermino);

	if (horasTermino >= horasInicio){ //começou e terminou no mesmo dia.
	    tempoEmMinutos = (horasTermino * minutosHora + minutosTermino) - (horasInicio * minutosHora + minutosInicio); //horas termino (em minutos) - horas inicio (em minutos)
	}else{ // começou em um dia e terminou no dia seguinte.
	    tempoEmMinutos =  minutosDia - (horasInicio * minutosHora + minutosInicio); // 24h (em minutos) - hora de inicio (em minutos)
        tempoEmMinutos += horasTermino * minutosHora + minutosTermino;
	}

	printf("\nDuração do jogo %02dh:%02dmin.\n", tempoEmMinutos / minutosHora, tempoEmMinutos % minutosHora);

	return(0);
}
*/
