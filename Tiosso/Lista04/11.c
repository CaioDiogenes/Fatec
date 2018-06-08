#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("--------------------------------------\n");
	printf("---- Exe09: Idade varias pessoas -----\n");
	printf("--------------------------------------\n");

    int idade, acima = 0,abaixo = 0;
    float media = 0, i = 0;

    do{
        printf("Informe a idade: ");
        scanf("%d",&idade);

            if (idade < 21){
                abaixo++;
            }
            if (idade > 50){
                acima++;
            }
            i++;
            media = idade / i;
    }while(idade != -1 );

        printf(" \n Total de pessoas abaixo de 21 anos: %d",abaixo);
        printf(" \n Total de pessoas acima de 50 anos: %d",acima);
        printf(" \n Media das idades: %d",media);
	return(0);
}

