#include <stdio.h>
#include <string.h>

int main(){
	char string [20];
	printf("nome 1\n");
	printf("\n");
	printf("Entre com o nome: ");
	scanf("%s", &string);
	char texto [20];
	printf("\n");
	printf("nome 2\n");
	printf("\n");
	printf("Entre com o nome: ");
	scanf("%s", &texto);
	
	int compara;
	compara = strcmp(string, texto);
	if (compara ==0){
		printf("As strings sao iguais!");
	}
	else{
		printf("As strings sao diferentes!");
	}
}
