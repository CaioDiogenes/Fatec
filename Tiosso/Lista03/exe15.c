/*
#include<stdio.h>
#include <locale.h>

// Fa�a o teste de mesa desse programa para voc� entender. =)

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("------------------\n");
	printf("-- Exe 15: Jogo --\n");
	printf("------------------\n");

	const int minutosDia = 1440;
	const int minutosHora = 60;

	int horasInicio, minutosInicio, horasTermino, minutosTermino;
	int tempoEmMinutos;

	printf("Informe o �nicio do jogo:\n");
	printf("\tHoras...... ");
	scanf("%d", &horasInicio);
	printf("\tMinutos.... ");
	scanf("%d", &minutosInicio);

	printf("Informe o t�rmino do jogo:\n");
	printf("\tHoras...... ");
	scanf("%d", &horasTermino);
	printf("\tMinutos.... ");
	scanf("%d", &minutosTermino);

	if (horasTermino >= horasInicio){ //come�ou e terminou no mesmo dia.
	    tempoEmMinutos = (horasTermino * minutosHora + minutosTermino) - (horasInicio * minutosHora + minutosInicio); //horas termino (em minutos) - horas inicio (em minutos)
	}else{ // come�ou em um dia e terminou no dia seguinte.
	    tempoEmMinutos =  minutosDia - (horasInicio * minutosHora + minutosInicio); // 24h (em minutos) - hora de inicio (em minutos)
        tempoEmMinutos += horasTermino * minutosHora + minutosTermino;
	}

	printf("\nDura��o do jogo %02dh:%02dmin.\n", tempoEmMinutos / minutosHora, tempoEmMinutos % minutosHora);

	return(0);
}
*/
