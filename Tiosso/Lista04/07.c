#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-----------------------------\n");
	printf("-----   Exe07: Tabuada  -----\n");
	printf("-----------------------------\n");

    int numero, i, maior;
    i = 0;

    printf("Digite o numero da tabuada: ");
    scanf("%i", &numero);

    do{
        printf("%d x %d = %d\n",i, numero, i * numero);
        i++;
    } while (i < 11);

	return(0);
}
