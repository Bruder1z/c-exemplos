#include <stdio.h>
#include<stdlib.h>

int main(){
	int x, y,i;
	printf("digite x e y: ");
	scanf("%d%d", &x, &y);
	
	for(i=1; i<=y; i++){
		printf("%3d",i);
		if(i%x ==0)
		printf("\n");
		
	}
}
