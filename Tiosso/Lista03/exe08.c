/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("---------------------------\n");
	printf("-- Exe08: Pre�o percurso --\n");
	printf("---------------------------\n");

	float precoLitro, kmPorLitro = 0, distancia = 0, quantidadeLitros = 0;

    printf("Qual � o pre�o por litro do combust�vel:");
    scanf("%f", &precoLitro);

    //Importante: N�o eram necess�rias as valida��es de precoLitro, kmPorLitro e distancia.
    //Mas, para o programa ficar melhor para o usu�rio final, elas foram realizadas! =)

    if (precoLitro > 0 ){

        printf("Qual a quantidade de quil�metros por litro do seu carro:");
        scanf("%f", &kmPorLitro);

        if (kmPorLitro > 0){

            printf("Qual a dist�ncia que deseja percorrer em Km?");
            scanf("%f", &distancia);

            if (distancia > 0){
                quantidadeLitros = distancia/kmPorLitro;
                printf("\nPara percorrer essa dist�ncia, voc� vai precisar de %.2f litros.", quantidadeLitros);
                printf("\nPortanto, voc� dever� desembolsar R$ %.2f.\n", quantidadeLitros * precoLitro);
            }else{
                printf("\nInforme uma dist�ncia v�lida.\n");
            }

        }else{
            printf("\nInforme uma quantidade de Km/l v�lida.\n");
        }

    }else{
        printf("\nInforme um pre�o v�lido.\n");
    }

	return(0);
}
*/
