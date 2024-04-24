#include <stdio.h>

int soma(int x, int z, int y, int media){
	return x+y+z;
}
int main(){
	int soma, x, y, z, media;
	printf("Digite o primeiro numero: ",x);
	scanf("%d",&x);
	printf("Digite o primeiro numero: ",y);
	scanf("%d",&y);
	printf("Digite o primeiro numero: ",z);
	scanf("%d",&z);
	
	media = (x+y+z)/3;
	
	printf("A MEDIA EH %d", media);
}
