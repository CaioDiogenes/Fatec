/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-----------------------------------\n");
	printf("-- Exe01: Raio da circunfer�ncia --\n");
	printf("-----------------------------------\n");

    const float PI = 3.14; //Considerar uma boa pr�tica de programa��o utilizar o nome da constante todo em mai�scula.
    float raio;

    printf("Digite o raio da circunfer�ncia: ");
    scanf("%f", &raio);

    if (raio > 0){ //N�o precisava dessa valida��o, mas .... =)
        printf("\nA �rea da circunfer�ncia �: %.2f\n", PI * (raio * raio));
        printf("\nA �rea da circunfer�ncia �: %.2f\n", raio * raio * PI); //outra forma de fazer a conta.
    }else{
        printf("\nPor favor, informe um valor maior do que 0 para o raio.\n");
    }

	return(0);
}
*/
