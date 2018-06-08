#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-------------------------\n");
	printf("-- Exe08: Maior número --\n");
	printf("-------------------------\n");

    int i, n1, n2, maior;
    i = 1;
    maior = 0;

    do{
        printf("\nDigite um número: ");
        scanf("%i", &n1);
        printf("\nDigite outro número: ");
        scanf("%i", &n2);

            if (n2 > n1){
               printf(":: %d  %d \n",n1,n2);
            }
    } while(n1 < n2);
    return(0);
}
