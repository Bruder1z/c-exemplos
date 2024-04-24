#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
	characactere;
	FILE*fp;
	fp = fopen("c:\\aluno\\teste3.txt", "r");
	int i = 0;
	char palavra [50];
	if(fp == NULL){
		printf("Arquivo não pode ser aberto\n");
		getch();
		exit(1);
	}
	rewind(fp;)
	while(!feof(fp))
	{
		fscanf(fp, "%c", &caractere)
		palavra[i]=caractere;
	}
	i++;
}
}
