#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("---------------------------------------\n");
	printf("-------   Exe05B: Par ou Impar  -------\n");
	printf("---------------------------------------\n");
    int i;
i = 1;
do{
   printf(" %d ",i);
   i= i + 2;
} while (i < 201);
  return(0);
}
