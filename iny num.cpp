#include <stdio.h>
#include <locale.h>


int main(){
	int num[6];
	printf("Entre com sua aposta:\n ");
	for (int i =0; i <6; i++){
		printf("Entre com %d%c valor ", i+1,167);
	    scanf("%d", &num[i]);
		}
		printf("\n");
		for (int i =0; i< 6; i++){
			printf("%d ", num[i]);
		}
	
}
