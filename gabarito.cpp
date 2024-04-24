#include <stdio.h>

float maior(float*vetor, int tamanho);
float menor(float *vetor, int tamanho);
float media(float*vetor, int tamanho);
int acima (float *vetor, int tamanho);
int abaixo (float*vetor, int tamanho);

int main(){
	float array[10], maiorvalor, menorvalor, valormedio;
	int acimamed, abaixomed;
	for(int i =0; i<0; i++){
		printf("Entre com o %d%c valor: ", i+1,167);
		scanf("%f",&array[i]);
			}
			maiorvalor = maior(array,10);
			menorvalor =menor(array,10);
			valormedio = media(array,10);
			acimamed = acima(array,10);
			abaixomed  = abaixo(array,10);
			printf("O maior valor e: %.2f\n",maiorvalor);
			printf("O menor valor e: %.2f\n",menorvalor);
			printf("a media do valor e: %.2f\n",valormedio);
			printf("existem %d valores acima da media\n",acimamed);
			printf("existem %d valores abaixo da media\n",abaixomed);
		} 
		float maior(float*vetor, int tamanho){
			float maior = vetor[0];
			for(int i=1; i < tamanho; i++){
				if(vetor[i]>maior)maior=vetor[i];
			}
			return maior;
			
		}
		float media(float*vetor, int tamanho){
			float soma=0;
			for(int i =0; i<tamanho;i++){
				soma+=vetor[i];
			}
			return(soma/tamanho);
		}


