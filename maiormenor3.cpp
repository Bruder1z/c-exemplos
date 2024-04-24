#include <stdio.h>

int main(){
	int a, b,c, maior, menor;
	printf("Digite tres valores: ");
	scanf("%d%d%d", &a,&b,&c);
	
	if (a < b){
		if(a<c)
		menor = a;
		else
		menor = c;
	}
	else{
		if(b < c)
		menor = b;
		
		else
		menor = c;
	}
	if(a > b){
		if(a > c)
		maior = a;
		else
		maior = c;
	}
	else{
		if(b>c)
		maior=b;
		else
		maior=c;
	}
	printf("Primeira versao \t maior: %d\tmenor: %d\n", maior, menor);
}
