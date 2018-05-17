#include<stdio.h>
#include<locale.h>

int main(){
            //Atribuindo linguagem em portugues ao programa.
    setlocale(LC_ALL,"Portuguese");

            //declarando variaveis
    int tipoCombustivel;
    float total , desconto, totalPagar, quantidadeCombustivel;
    const float gasolina=4.10;
    const float alcool=2.70;

            //requerindo informações ao usuario
    printf(" ====================================");
    printf("\n Exer 10 (Posto de combustivel)");
    printf("\n ==================================== \n");
    printf("\n Digite a quantidade de combustível vendido: ");
    scanf("%f", &quantidadeCombustivel);
    printf("\n Digite tipo de combustível \n 1-alcool || 2-gasolina: ");
    scanf("%d", &tipoCombustivel);

            //fazendo operacoes e devolvendo resultados realizados
    if (tipoCombustivel==1 && quantidadeCombustivel <= 20){
            //calculo do desconto
        desconto=quantidadeCombustivel*(0.02*alcool);
            //calculo do total a pagar sem nenhum desconto
        total=quantidadeCombustivel*alcool;
            //total a pagar com desconto
        totalPagar=total-desconto;
        printf("\n Total a pagar é:%.2f", totalPagar);
    }else if (tipoCombustivel==1 && quantidadeCombustivel > 20){
            //calculo do desconto
        desconto=quantidadeCombustivel*(0.05*alcool);
            //calculo do total a pagar sem nenhum desconto
        total=quantidadeCombustivel*alcool;
            //total a pagar com desconto
        totalPagar=total-desconto;
        printf("\n Total a pagar é:%.2f", totalPagar);
    }else if (tipoCombustivel==2 && quantidadeCombustivel <= 20){
            //calculo do desconto
        desconto=quantidadeCombustivel*(0.03*gasolina);
            //calculo do total a pagar sem nenhum desconto
        total=quantidadeCombustivel*gasolina;
            //total a pagar com desconto
        totalPagar=total-desconto;
        printf("\n Total a pagar é:%.2f", totalPagar);
    }else {
            //calculo do desconto
        desconto=quantidadeCombustivel*(0.06*gasolina);
            //calculo do total a pagar sem nenhum desconto
        total=quantidadeCombustivel*gasolina;
            //total a pagar com desconto
        totalPagar=total-desconto;
        printf("\n Total a pagar é:%.2f", totalPagar);
    }
            //fim do programa principal
return(0);
}



