#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	float numero;
	printf("digite um valor numerico: ");
	scanf("%f",&numero);
	printf("A raiz quadrada de %.2f e igual a %.2f", numero, sqrt(numero));
	
}
