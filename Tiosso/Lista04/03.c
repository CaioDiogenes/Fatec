#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	printf("---------------------------------- Exe07: Numeros Ordem Decrescente  --------------------------------------------------\n");
	printf("-----------------------------------------------------------------------------------------------------------------------\n");

    int i;
i = 100;
do{
    printf(" %d ",i);
    i--;
} while (i > 0);
  return(0);
}