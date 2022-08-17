#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    int valor;;
    arquivo = fopen("teste.txt", "rt");
    if (arquivo == NULL)
    {
        puts("O arquivo não existe");
        exit(10);
    }
    else
        puts("Arquivo aberto");
        while(!feof(arquivo)){
            fscanf(arquivo, "%d",&valor);
            printf("%d\n",valor);
        }
    fclose(arquivo);
}
