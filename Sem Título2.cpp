#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int maior=0;
	int Menor;
	int contador; 
	
	for(contador=0; contador<3;contador++){ 
		printf("\ninforme um numero ");
		scanf("%f",&n);
		
		if(n>maior && n < Menor){
			maior = n;
			Menor = n;
			}
			if(n<Menor & n!=0){
				Menor=n;
			}
			if(n>maior && n!=0){
				maior=n;
			}
		}
	printf("maior numero %f", maior);
	printf("menor numero %f", Menor);
}

