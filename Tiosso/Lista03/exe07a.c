/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("---------------------\n");
	printf("-- Exe07a: Votação --\n");
	printf("---------------------\n");

	//Isso não precisa, mas gostei da ideia do Andrew! Muito obrigado Andrew!! =)
	printf("\nTabela de votos:\n");
	printf("\t1, 2, 3, 4... Candidatos\n");
	printf("\t5............ Voto NULO\n");
    printf("\t6............ Em BRANCO\n");

    int voto;

    printf("\nInforme seu voto:");
    scanf("%i", &voto);

    if (voto < 1){
        printf("\nVoto inválido.\n");
    }else if (voto < 5){
        printf("\nVoto contabilizado com sucesso...\n");
    }else if (voto == 5){
        printf("\nVoto nulo contabilizado...\n");
    }else if (voto == 6){
        printf("\nVoto branco contabilizado...\n");
    }else{
        printf("\nVoto inválido.\n");
    }

	return(0);
}
*/
