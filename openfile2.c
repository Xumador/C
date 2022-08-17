#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    char line[100];
    arquivo = fopen("teste.txt", "at");
    if (arquivo == NULL)
    {
        puts("O arquivo não pode ser criado");
        exit(10);
    }
    else
        puts("Arquivo aberto");
        fprintf(arquivo,"arquivo\n");
    fclose(arquivo);
}
