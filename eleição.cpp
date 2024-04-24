#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <iostream>


int main(){
	int v=7, c1=0, c2=0, c3=0, vn=0, vb=0;
	printf("Bem vindo as eleições");
	
	while(v!=210)
	{
		printf("\n\n1 - Kelly\n2 - Rauqel\n3 - Yuri\n4 - voto nulo\n5 - voto em branco");
		printf("\nDigite o numero correspondente ao seu voto e aperte ENTER; ");
		scanf("%i", &v);
		
		switch(v)
		{
			case 210:
				printf("\nVOTACAO ENCERRADA!");
				break;
				
				case 1:
				c1=c1+1;
				printf("Kelly - voto registrado! OBRIGADOR PELO VOTO");
				break;
				
					case 2:
				c2=c2+1;
				printf("Raquel - voto registrado! OBRIGADOR PELO VOTO");
				break;
				
					case 3:
				c3=c3+1;
				printf("Yuri - voto registrado! OBRIGADOR PELO VOTO");
				break;
				
					case 4:
				vn=vn+1;
				printf("voto nulo - voto registrado! OBRIGADOR PELO VOTO");
				break;
				
					case 5:
				vb=vb+1;
				printf("voto em branco - voto registrado! OBRIGADOR PELO VOTO");
				break;
				
				default: 
				printf("OPCAO INVALIDA");
				break;
				
				
		}
	}
	printf("Resultados:\nKelly\t %i\n Raquel\t %i\nYuri\t %i\nVoto Nulo\t %i\\nVoto em Branco\t %i", c1, c2, c3, vn, vb);
	getchar();
	printf("\n\n");
	system("pause");
	return(0);
}
