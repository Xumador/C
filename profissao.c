#include <stdio.h>

struct
{
    int codigo;
    char profissao[15];
} tabela[5] = {
    100, "padeiro",
    140, "marceneiro",
    200, "medico",
    210, "dentista",
    300, "administrador"};
int main()
{
    int codigo, i;
    for (i = 0; i < 5; i++)
        printf("%d %s\n", tabela[i].codigo, tabela[i].profissao);
    puts("Digite um código: ");
    scanf("%d", &codigo);
    for (i = 0; i < 5 && codigo != tabela[i].codigo; i++)
        ;
    if (codigo == tabela[i].codigo)
        printf("A profissão é %s\n", tabela[i].profissao);
    else
        printf("Código não cadastrado.\n");
}