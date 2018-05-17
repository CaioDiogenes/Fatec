/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-----------------------\n");
	printf("-- Exe03: Peso Ideal --\n");
	printf("-----------------------\n");

	char sexo;
    float altura, pesoIdeal;

    printf("Digite o sexo (M)asculino /(F)eminino:");
    scanf("%c", &sexo);

    if (sexo == 'm' || sexo == 'M'
        || sexo == 'f' || sexo == 'F'){

        printf("Digite sua altura [, para separar os decimais]:");
        scanf("%f", &altura);

        if (altura > 0){ //Não precisa ter essa verificação, mas... =)

            if (sexo == 'm' || sexo == 'M'){
                pesoIdeal = altura * altura * 23;
            }else{
                pesoIdeal = altura * altura * 22;
            }

            printf("\nSeu peso ideal é: %.2f Kg.\n", pesoIdeal);

        }else{
            printf("\nAltura inválida.\n");
        }

    }else{
        printf("\nOpção inválida.\n");
    }

	return(0);
}
*/
