#include <stdio.h>


int main ()
{
    FILE *fp;
    fp = fopen("c:\aluno\nomes.txt", "a");
    if(fp !=0)
    {
        nome1 = printf("Digite o primeiro nome);
        nome2 = printf("Digite o segundo nome);
        nome3 = printf("Digite o terceiro nome);
        fprintf(fp, nome1, nome2, nome3...)
        fclose(fp);
    }
    else
        printf("Não foi possivel abrir o arquivo, tente novamente."):
}
