#include <stdio.h>
#include <math.h>

int main(){
	int cigarro=0;
	float pcigarro=0.0;
	int tfuma=0;
	
	printf("Quantas carteiras de cigarro voce fuma por dia: ");
	scanf("%d", &cigarro);
	printf("Qual o preço da carteira de cigarro?\n");
	scanf("%f",&pcigarro);
	printf("Quantos anos voce fuma?\n");
	scanf("%d", &tfuma);
	
	
	float gastodia= cigarro*pcigarro;
	float gastototal=(tfuma*365)*gastodia;
	
	printf("voce ja gastou %.2f com cigarro", gastototal);
	
	
}
