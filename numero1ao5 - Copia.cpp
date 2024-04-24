#include <stdio.h>

int main(int num1, int num2, int num3, int num4, int num5, int v){
	printf("1 - numero1\n");
	printf("2 - numero2\n");
	printf("3 - numero3\n");
	printf("4 - numero4\n");
	printf("5 - numero5\n");
	
	printf("Selecione um numero no menu e aperte ENTER: ");
	scanf("%d", &v);
	
	switch(v){
		case 0:
			printf("SAINDO...");
			break;
			
			case 1: num1=num1+1;
			printf("\nNumero1");
			break;
			
			case 2: num2=num2+1;
			printf("\nNumero2");
			break;
			
			case 3: num3=num3+1;
			printf("\nNumero3");
			break;
			
			case 4: num4=num4+1;
			printf("\nNumero4");
			break;
			
			case 5: num5=num5+1;
			printf("\nNumero5");
			break;
	}
	printf("\n");
    getchar();
    return 0;
}

