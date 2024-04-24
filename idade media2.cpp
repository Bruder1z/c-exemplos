#include <stdio.h>

int main(){
	float soma=0, contador = 0, idade = 0;
	while (idade!=999){
		printf("entre com idade ou 999 para encerrar: ");
		scanf("%f", &idade);
		if (idade !=999){
			contador++;
			soma = soma+idade;
		}
	}
	printf("a media das idades e :%.2f", soma/contador);
}
