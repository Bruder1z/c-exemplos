#include <stdio.h>

int fatorial(int n){
	int fat = 1;
	for(int i=2; i<= n; i++){
		fat = fat*i;
	}
	return fat;
}

int main(){
	int num;
	printf("ESCOLHA UM NUMERO: ");
	scanf("%d", &num);
	printf("\no fatorial de %d e igual %d",num, fatorial(num));
	return 0;
}
