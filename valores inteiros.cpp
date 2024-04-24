#include <stdio.h>

int main(){
	int v1, v2, troca;
	printf("digite o primeiro valor inteiro: ");
	scanf("%d",&v1);
	printf("digite o segundo valor inteiro: ");
	scanf("%d",&v2);
	
	troca =v2;
	printf("Primeiro valor: %d", troca);
	
	troca = v1;
	printf("\nSegundo valor: %d", troca);
}
