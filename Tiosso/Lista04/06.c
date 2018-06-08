#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-------------------------\n");
	printf("-- Exe06: Maior número --\n");
	printf("-------------------------\n");

    int i, n1, maior;
    i = 1;
    maior = 0;
    do{
    printf("Digite um número \n");
    scanf("%i", &n1);
        if (n1 > maior){
            maior = n1;
        }
    i++;
    } while(i < 6 );
        printf(" O maior numero dentre todos os inseridos foi: %d",maior);
	return(0);
}
