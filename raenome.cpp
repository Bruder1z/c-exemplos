#include <stdio.h>
#include <string.h>

struct infos{
	int ra;
	int p1;
	int p2;
};

int main(){
	infos  hoje;
	char nome [40];
	printf("Entre com o primeiro nome : ");
	fgets(nome, 40, stdin);
	printf("Entre com RA: ");
	scanf("%d", &hoje.ra);
	printf("Entre com a nota da p1: ");
	scanf("%d",&hoje.p1);
	printf("Entre com a nota da p2: ");
	scanf("%d",&hoje.p2);
	printf("%s/%d/%d/%d", nome, hoje.ra, hoje.p1, hoje.p2);
	
	
}
