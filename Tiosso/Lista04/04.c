#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("----------------------------------\n");
	printf("-----   Exe04: Par ou Impar  -----\n");
	printf("----------------------------------\n");
	int numero,i;
	i=1;
    do{
	printf("Informe um numero: ");
	scanf("%d",&numero);

	if(numero % 2 == 0 ){
		printf("O numero %d e par.",numero);
	}else{
		printf("o numero %d e impar",numero);
	}
        printf("\nDeseja continuar: 0 - para nao || 1 - para sim: \n");
        scanf("%d",&i);
    }while (i != 0);
}

