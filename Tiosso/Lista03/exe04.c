/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-----------------------\n");
	printf("-- Exe04: Maioridade --\n");
	printf("-----------------------\n");

	const int IDADELIMITE = 18;
	float idade;

    printf("Digite sua idade: ");
    scanf("%f", &idade);

    if (idade > 0){
        if (idade < 18){
            printf("\nVoc� � menor de idade e falta %.1f anos para completar a maioridade.\n", IDADELIMITE - idade);
        }else{
            printf("\nVoc� � maior de idade h� %.1f anos!.\n", idade - IDADELIMITE);
        }
    }else{
        printf("\nInforme uma idade v�lida!\n");
    }

	return(0);
}
*/
