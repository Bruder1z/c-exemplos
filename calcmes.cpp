#include <stdio.h>
#include <string.h>

struct infos{
	int pot;//kw
	int tempo;//h
	int mes;
};

int main(){
	infos hoje;
	int calc;
	char aparelhos[20];
	fflush(stdin);
	
	printf("Entre com o nome do aparelho domestico: ");
	gets(aparelhos);
	fflush(stdin);
	
	printf("Entre com o valor da potencia do aparelho: ");
	scanf("%d", &hoje.tempo);
	
	printf("Entre com o tempo ligado do aparelho: ");
	scanf("%d", &hoje.tempo);
	
	
	printf("Entre com os dias ligados durante o mes: ");
	scanf("%d", &hoje.mes);
	
	calc = hoje.pot * hoje.tempo * hoje.mes/1000;
	
	printf("O calculo da parada: %d KWh", calc);
}
