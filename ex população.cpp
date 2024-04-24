#include <stdio.h>

int main(){
	int pop = 0;
	printf("digite a populacao: ");
	scanf ("%d", &pop);
	for(int i=1; i<=30; i++){
		pop = pop*1.1;
		printf("%d - %d\n", i, pop);
	}
}
