#include <stdio.h>
struct conta{

int numr;
};
int main(){
	conta empresa;
	int registro;
	int funcao;
	int editor;
	int programador;
	int marketing;
	char nome[50];
	
	printf("Digite seu nome: ");
	gets(nome);
	fflush(stdin);
	
	printf("Qual sua funcao na empresa?\n1-PROGRAMADOR\n2-MARKETING\n3-EDITOR\n ");
	scanf("%d", &funcao);
	
	switch(funcao){
		
	case 1: 
	printf("PROGRAMADOR\n");
	scanf("%d", &programador);
	printf("Numero de registro: : ");
	scanf("%d", &registro);
	printf("Seu salario: ");
	break;
	
	case 2: 
	printf("MARKETING\n");
	scanf("%d", &marketing);
	printf("Numero de registro: : ");
	scanf("%d", &registro);
	break;
	
	case 3: 
	printf("EDITOR\n");
	scanf("%d", &editor);
	printf("Numero de registro: : ");
	scanf("%d", &registro);
	break;
	
	default:
		printf("sair\n");
		break;
	}
}
	
	
	
	
	
	
	
	
	
	
	

