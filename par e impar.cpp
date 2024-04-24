#include <stdio.h>
#include <stdlib.h>

int main() {
int i, pares=0, impares=0;
	for(i=0;i<15;i++){
		printf("Digite um numero: ");
		scanf("%d", &i);
		if(i%2==0)
		{pares++;}
		else {impares++;}
	}
	printf("\nA quantidade de nuemros pares digitados foi: %d", pares);
	printf("\nA quantidade de numeros impares digitados foi: %d", impares);
	
}
