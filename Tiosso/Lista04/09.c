#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-----------------------------------\n");
	printf("---- Exe09: Maior Menor Numero ----\n");
	printf("-----------------------------------\n");

    int i, n1, maior, menor;
    i = 1;
    maior = 0;
    menor = n1;
    printf("1) Digite um número\n");
    printf("\n2) Aperte: 0 - para sair\n");
    do{
        printf("\n1: ");
        scanf("%i", &n1);
            if (n1 > maior){
                maior = n1;
            }else if (n1 < menor){
                menor = n1;
            }
    i++;
        printf("2: ");
        scanf("%d",&i);
    }while(i != 0 );

        printf(" \n O maior numero dentre todos os inseridos foi: %d",maior);
        printf(" \n O menor numero dentre todos os inseridos foi: %d",menor);
	return(0);
}
