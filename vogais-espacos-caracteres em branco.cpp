#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char nome[40];
	int tamanhonome, totalvogais=0, totalespacos=0;
	
	printf("digite o nome: ");
	gets(nome);
	
	tamanhonome=strlen(nome);
	for(int i =0; i < tamanhonome; i++){
		switch(tolower(nome[i])){
			case 'a':
			case 'e':
			case 'i':
		    case 'o':
		    case 'u':
		    	totalvogais++;
		    	break;
		    	case ' ':
		    		totalespacos++;
		    		break;
		}
	}
	printf("\ntotal de caracteres: %i", tamanhonome);
	printf("\ntotal de vogais: %i", totalvogais);
	printf("\ntotal de espacos: %i", totalespacos);
}
