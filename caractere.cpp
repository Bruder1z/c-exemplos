#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	char letra;
	printf("digite um caractere: ");
	letra = getche();
	fflush(stdin);
	printf("\nO caractere digitado foi o %c", letra);
}
