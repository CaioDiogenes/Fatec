#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

	printf("-----------------------------\n");
	printf("-- Exe10: Acesso com senha --\n");
	printf("-----------------------------\n");

	const int senha = 904087;
	int senhaUsuario = 0;

    do{
        printf("\nInforme a senha:");
        scanf("%d", &senhaUsuario);

            if (senhaUsuario == senha){
                printf("Acesso permitido.\n");
            }else{
                printf("Você não tem acesso ao sistema.\n");
            }
    }while(senhaUsuario != senha);
    return (0);
}
