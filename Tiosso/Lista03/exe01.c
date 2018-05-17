/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-----------------------------------\n");
	printf("-- Exe01: Raio da circunferência --\n");
	printf("-----------------------------------\n");

    const float PI = 3.14; //Considerar uma boa prática de programação utilizar o nome da constante todo em maiúscula.
    float raio;

    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    if (raio > 0){ //Não precisava dessa validação, mas .... =)
        printf("\nA área da circunferência é: %.2f\n", PI * (raio * raio));
        printf("\nA área da circunferência é: %.2f\n", raio * raio * PI); //outra forma de fazer a conta.
    }else{
        printf("\nPor favor, informe um valor maior do que 0 para o raio.\n");
    }

	return(0);
}
*/
