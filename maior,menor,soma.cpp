#include <stdio.h>

int main(){
	float soma = 0, contador =0, valor = 0, guarda_menor, guarda_maior;
	while(valor !=999){
		printf("Entre com valores ou 999 para encerrar: ");
		scanf("%f", &valor);
		if(valor !=999){
			contador++;
			soma = soma+valor;
		}
	}
	
	printf("A media dos valores eh : %.2f", soma/contador);
	if (valor<guarda_menor)
	guarda_menor=valor;
	
	printf("\n O MENOR NUMERO DIGITADO FOI: %d", guarda_menor);
}
