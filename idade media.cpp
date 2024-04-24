#include <stdio.h>

int main(){
	float soma=0, contador = 0, idade=999;
	do{
		printf("Entre com a idade ou 999para encerrar: ");
		scanf("%f", &idade );
		if (idade==999){
			break;
		}
		contador++;
		soma = soma + idade;
	}while (idade !=999);
	printf("a media das idades e: %.2f", soma/contador);
}
