#include <stdio.h>
#include <string.h>

int main()
{
	char string[40];
	printf("\n");
	printf("Convertendo uma frase para maiusculas\n");
	printf("\n");
	printf("Entre com a frase: ");
	scanf("%s", &string);
	printf("\n");
	printf("Frase digitada : %s\n", string);
	printf("\n");
	printf("Convertendo para maiusculas : %s\n", strupr(string));return(0);
}
