/*
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3,numeroDeFaltas,limiteDeFaltas;
    float media;
    const int aulasDadas = 80;

    printf("Informe a primeira nota:");
    scanf("%d",&n1);
    printf("Informe a segunda nota:");
    scanf("%d",&n2);
    printf("Informe a terceira nota:");
    scanf("%d",&n3);
    printf("Informe o numero de faltas do aluno:");
    scanf("%d",&numeroDeFaltas);

    media = (n1+n2+n3) / 3;
    limiteDeFaltas = aulasDadas * 0.25;

    if( numeroDeFaltas > limiteDeFaltas ){
        printf("reprovado por falta");
    }else if(media < 7){
        printf("reprovado por nota");
    }else{
    printf("Aprovado!");
    }
    }
*/
