#include <stdio.h>

int media(int nota1, int nota2){
	return(nota1+2*nota2)/3;
}
int main(){
	int media, media2, nota1, nota2, nota3;
	
	printf("digite a nota da P1: ", nota1);
	scanf("%d",&nota1);
		printf("digite a nota da P2: ", nota1);
	scanf("%d",&nota2);
	
	media = (nota1+2*nota2)/3;
	
	if(media >=5){
		printf("\nVOCE FOI APROVADO!");
	}
	else{
		printf("\nVOCE FOI REPROVADO\n");
		printf("\ncoloque a nota da P3: ", nota3);
		scanf("%d",&nota3);
		
		if (nota3>=5){
			printf("\nVOCE PASSOU COM A P3!");
		}
		else{
			printf("\nVOCE FOI REPROVADO NOVAMENTE.");
		}
	}
}
