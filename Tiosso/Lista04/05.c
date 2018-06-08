#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("-----------------------------\n");
	printf("-----   Exe05: Tabuada  -----\n");
	printf("-----------------------------\n");

    int i;
    i = 1;

    do{
        if ( i % 2 == 1){
            printf(" %d ",i);
            i++;
        }else{
            printf(" ");
            i++;}
    }while (i < 201);
  return(0);
}
