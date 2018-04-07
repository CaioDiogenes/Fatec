/*
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

	printf("-------------------------------------------------\n");
	printf("-- Exe10: Segundo TO Horas, minutos e segundos --\n");
	printf("-------------------------------------------------\n");

	int segundosUsuario = 0;
	int segundos = 0, minutos = 0, horas = 0;

	printf("Informe o número de segundos:");
	scanf("%d", &segundosUsuario);

	segundos = segundosUsuario % 60;
    segundosUsuario /= 60;

    minutos = segundosUsuario % 60;
    segundosUsuario /= 60;

    horas = segundosUsuario % 24;

    printf("\nEntendi... Então, veja a conversão abaixo:");
    printf("\nHoras: %d", horas);
    printf("\nMinutos: %d", minutos);
    printf("\nSegundos: %d", segundos);

    return (0);
}
*/
