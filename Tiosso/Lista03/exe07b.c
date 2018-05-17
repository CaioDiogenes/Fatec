/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("---------------------\n");
	printf("-- Exe07b: Votação --\n");
	printf("---------------------\n");

	//Isso não precisa, mas gostei da ideia do Andrew! Muito obrigado Andrew!! =)
	printf("\nTabela de votos:\n");
	printf("\t1, 2, 3, 4... Candidatos\n");
	printf("\t5............ Voto NULO\n");
    printf("\t6............ Em BRANCO\n");

    int voto;

    printf("\nInforme seu voto:");
    scanf("%i", &voto);

    switch(voto){
        case 1:
        case 2:
        case 3:
        case 4:
            printf("\nVoto contabilizado com sucesso...\n");
            break;
        case 5:
            printf("\nVoto nulo contabilizado...\n");
            break;
        case 6:
            printf("\nVoto branco contabilizado...\n");
            break;
        default:
            printf("\nVoto inválido.\n");
    }

	return(0);
}
*/
