/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-------------------------------------\n");
	printf("-- Exe 14: Valor a pagar com juros --\n");
	printf("-------------------------------------\n");

	float valorCompra, taxaJuros, valorPagar;
    int diasAtraso, parcelas;

    printf("Valor da compra:");
    scanf("%f", &valorCompra);

    if (valorCompra > 0){

        printf("Taxa de juros pelo atraso do pagamento:");
        scanf("%f", &taxaJuros);

        if (taxaJuros >= 0){

            printf("Quantidade de dias de atraso:");
            scanf("%i", &diasAtraso);

            if (diasAtraso > 0){

                valorPagar = valorCompra + (valorCompra * (taxaJuros / 100) * diasAtraso);
                printf("\nO novo valor à pagar é: R$ %.2f.\n", valorPagar);

                 if (valorPagar <= 100){
                    printf("Pagamento deve ser realizado à vista.\n");
                }else if (valorPagar <= 300){
                    printf("Pagamento deve ser realizado em 2 parcelas.\nCada parcela será de: R$%.2f.\n", valorPagar / 2);
                }else if (valorPagar <= 500){
                    printf("Pagamento deve ser realizado em 3 parcelas.\nCada parcela será de: R$%.2f.\n", valorPagar / 3);
                }else if (valorPagar <= 900){
                    printf("Pagamento deve ser realizado em 5 parcelas.\nCada parcela será de: R$%.2f.\n", valorPagar / 5);
                }else if (valorPagar <= 1000){
                    printf("Pagamento deve ser realizado em 6 parcelas.\nCada parcela será de: R$%.2f.\n", valorPagar / 6);
                }else{
                    printf("Informe a quantidade de parcelas que deseja pagar:");
                    scanf("%i", &parcelas);

                    if (parcelas > 0){
                        if (parcelas == 1){
                            printf("Seu pagamento será à vista.\n");
                        }else{
                            printf("Seu pagamento será em %i parcelas, sendo cada uma no valor de R$%.2f.\n", parcelas, valorPagar / parcelas);
                        }
                    }else{
                        printf("\nNúmero de parcelas inválido.\n");
                    }
                }
            }else{
                printf("\nQuantidade de dias em atraso inválida.\n");
            }
        }else{
            printf("\nTaxa de juros inválida.\n");
        }

    }else{
        printf("\nValor de compra inválido.\n");
    }

    return(0);
}
*/
