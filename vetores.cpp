#include <stdio.h>

int funcao(int indice){
	int vetor [10];
	for(indice=1;indice<=5;indice++){
		printf("\nVetor[%d]: ",indice);
		scanf("%d", &vetor[indice]);
	}
}
int main(){
	int vetor [10], indice;
	for (indice =1;indice <=5; indice++){
		printf("\nVetor[%d]: ", indice);
		scanf("%d", &vetor[indice]);
	}
}
