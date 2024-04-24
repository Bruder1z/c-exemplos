#include <stdio.h>
#include <locale.h>

int main(){
	int num [3][4];
	for (int linha = 0; linha < 3; linha ++){
		for (int coluna = 0; coluna < 4; coluna ++){
			printf ("Valor [%d][%d]\n = ", linha,coluna);
			scanf("%d", &num[linha][coluna]);
			
		}
	}
	printf ("\n \n");
	for(int linha = 0; linha <3; linha ++){
		for (int coluna = 0; coluna < 4; coluna ++){
			printf("\t%d", num [linha][coluna]);
		}
		printf("\n");
	}
}

