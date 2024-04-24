#include <stdio.h>

struct conta{
	int numerodacc;
	float saldo;
};

int main(){
	conta banco;
	int opcao;
	int saldo;
	int deposito;
	int retirada;
	char nome[50];
	
	printf("Digite o seu nome: ");
	gets(nome);
	fflush(stdin);
	
	printf("Insira os numeros da sua conta bancaria:  ", banco.numerodacc);
	scanf("%d",&banco.numerodacc);
	
	saldo=1200;
	printf("Seu saldo e igual a %d\n", saldo);
	
	printf("Selecione a opcao que deseja:\n1-deposito\n2-retirada\n3-saldo\n4-nenhuma das opcoes\n");
	scanf("%d", &opcao);
	
	switch(opcao){
	
	
	case 1: 
	printf("deposito\n");
	printf(" valor do deposito: ");
	scanf("%d", &deposito);
	break;
	
	case 2: 
	printf("retirada\n");
	printf("digite o valor que deseja retirar\n");
	scanf("%d", &retirada);
	break;
	
	case 3: 
	printf("Saldo\n");
	printf("Seu saldo e de 1200 reais\n");
	
	default:
		printf("sair\n");
		break;
}
	
}
