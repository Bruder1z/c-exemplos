#include <stdio.h>
#include <math.h>

int main(){
	float n1, n2, n3, maior, menor;
	printf("digite um numero: ");
	scanf("%f", &n1);
	printf("digite o outro: ");
	scanf("%f", &n2);
	printf("digite outro: ");
	scanf("%f", &n3);
	
	if(n1>n2){
		maior=n1;
		menor=n2;
	}else{
		maior=n2;
		menor=n1;
	}
	if(n3 > maior){
		maior=n3;
	}else if (n3<menor){
		menor=n3;
	}
	printf(" o maior numero e %.2f\n", maior);
	printf(" o menor numero e %.2f\n", menor);
		
	}

