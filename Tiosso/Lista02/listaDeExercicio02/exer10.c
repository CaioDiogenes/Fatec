/*
#include <stdio.h>
int main(){
 float CombustivelVendido, total, desconto, totalPagar;
 int tipoDeCombustivel;
 const float alcool = 2.70;
 const float gasolina = 4.10;

 	printf("Digite a quantia de combustivel abastecido:\n");
 	scanf("%f", &CombustivelVendido);
 	printf("Digite o tipoDeCombustivel:\n 1- Alcool  || 2- Gasolina\n");
 	scanf("%i", &tipoDeCombustivel);

	if(tipoDeCombustivel == 1 && CombustivelVendido <= 20){
	 	total = CombustivelVendido * alcool;
	 	desconto = CombustivelVendido * (2/100 * alcool);
	 	totalPagar = total - desconto;
	 	printf("Valor a pagar %.2f\n", totalPagar);
 	}else if(tipoDeCombustivel == 1 && CombustivelVendido > 20){
	  	total = CombustivelVendido * alcool;
	  	desconto = CombustivelVendido * (5/100 * alcool) ;
	  	totalPagar = total - desconto;
	  	printf("Valor a pagar %.2f\n", totalPagar);
	}else if(tipoDeCombustivel == 2 && CombustivelVendido <= 20){
		total = CombustivelVendido * gasolina;
		desconto = CombustivelVendido * (3/100 * gasolina);
		totalPagar = total - desconto;
		printf("Valor a pagar %.2f\n", totalPagar);
	 }else{
		total = CombustivelVendido * gasolina;
		desconto = CombustivelVendido * (6/100 * gasolina);
		totalPagar = total - desconto;
		printf("Valor a pagar %.2f\n", totalPagar);
	}
	return(0);
	}
*/
