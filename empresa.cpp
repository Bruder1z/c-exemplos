#include <stdio.h>
#include <string.h>

struct infos{
	int codigo;
	float pr;
};
int main(){
	infos hoje;
	char nome [30];
	char console[10];
	char genero [15];
	
	printf("Entre com o nome do jogo: ");
	fgets(nome, 30, stdin);
	printf("CONSOLE: ");
	fgets(console, 10, stdin);
	printf("Entre com o genero do jogo: ");
	fgets(nome, 15, stdin);
	printf("Entre com o codigo: ");
	scanf("%f", &hoje.codigo);
	printf("Entre com o valor: ");
	scanf("%f", &hoje.pr);
}
