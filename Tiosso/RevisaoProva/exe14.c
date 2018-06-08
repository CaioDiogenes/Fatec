#include<stdio.h>
int main(){
    float valorPagar, valorCompra,taxa, qtdeDiasAtraso,novaParcela;
    printf("Informe o valor da compra:");
    scanf("%f",&valorCompra);
    printf("Informe a taxa de juros:");
    scanf("%f",&taxa);
    printf("Informe quantidades de dias em atraso:");
    scanf("%f",&qtdeDiasAtraso);
    valorPagar=valorCompra+(valorCompra*(taxa/100)*qtdeDiasAtraso);
    if (valorPagar<=100){
        printf("Pagamento deve ser realizado a vista!");
    }else if(valorPagar>=101 && valorPagar<=300){
        printf("Pagamento realizado em 2 parcelas!\n");
        valorPagar=valorPagar/2;
        printf("Valor de cada parcela eh:%.2f",valorPagar);
    }else if(valorPagar>=301 && valorPagar<=500){
        printf("Pagamento realizado em 3 parcelas!\n");
           valorPagar=valorPagar/3;
        printf("Valor de cada parcela eh:%.2f",valorPagar);
    }else if(valorPagar>=501 && valorPagar<=900){
        printf("Pagamento realizado em 5 parcelas!\n");
           valorPagar=valorPagar/5;
        printf("Valor de cada parcela eh:%.2f",valorPagar);
    }else if(valorPagar>=901 && valorPagar<=1000){
        printf("Pagamento realizado em 6 parcelas!\n");
           valorPagar=valorPagar/6;
        printf("Valor de cada parcela eh:%.2f",valorPagar);
    }else if(valorPagar>1000){
        printf("Escolha em quantas parcelas gostaria de pagar:\n");
        scanf("%f",&novaParcela);
            if(novaParcela!=1){
                printf("Seu pagamento sera realizado em:%.0f parcelas\n", novaParcela);
                   valorPagar=valorPagar/novaParcela;
                    printf("Valor de cada parcela eh:%.2f",valorPagar);
            }else{
            printf("Pagamento a vista");
            }
            }

}
