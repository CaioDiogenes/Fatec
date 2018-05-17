/*
#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("---------------------------\n");
	printf("-- Exe08: Preço percurso --\n");
	printf("---------------------------\n");

	float precoLitro, kmPorLitro = 0, distancia = 0, quantidadeLitros = 0;

    printf("Qual é o preço por litro do combustível:");
    scanf("%f", &precoLitro);

    //Importante: Não eram necessárias as validações de precoLitro, kmPorLitro e distancia.
    //Mas, para o programa ficar melhor para o usuário final, elas foram realizadas! =)

    if (precoLitro > 0 ){

        printf("Qual a quantidade de quilômetros por litro do seu carro:");
        scanf("%f", &kmPorLitro);

        if (kmPorLitro > 0){

            printf("Qual a distância que deseja percorrer em Km?");
            scanf("%f", &distancia);

            if (distancia > 0){
                quantidadeLitros = distancia/kmPorLitro;
                printf("\nPara percorrer essa distância, você vai precisar de %.2f litros.", quantidadeLitros);
                printf("\nPortanto, você deverá desembolsar R$ %.2f.\n", quantidadeLitros * precoLitro);
            }else{
                printf("\nInforme uma distância válida.\n");
            }

        }else{
            printf("\nInforme uma quantidade de Km/l válida.\n");
        }

    }else{
        printf("\nInforme um preço válido.\n");
    }

	return(0);
}
*/
