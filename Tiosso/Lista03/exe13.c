/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-------------------------\n");
	printf("-- Exe 13: Comerciante --\n");
	printf("-------------------------\n");

	const float VALORLIMITE = 20;
    float valorCompra, valorVenda;

    printf("Informe o valor de compra do produto: R$");
    scanf("%f", &valorCompra);

    if (valorCompra >= 0){
         if (valorCompra < VALORLIMITE){
            valorVenda = valorCompra * 1.45;
        }else{
            valorVenda = valorCompra * 1.3;
        }
        printf("\nO valor de venda do produto será: R$%.2f.\n", valorVenda);
    }else{
        printf("Valor inválido.");
    }

    return(0);
}
*/
