#include <stdio.h>

int main(){
	char sexo;
	do{
		printf("entre com o sexo(m ou f): ");
		scanf("%c", &sexo);
		fflush(stdin);
	}while(sexo != 'm' && sexo !='f' );
}
