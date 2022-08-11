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
    printf("Digite um código ou '0' para encerrar a busca: ");
    while (codigo != 0)
    {
        scanf("%d", &codigo);
        for (i = 0; i < 5 && codigo != tabela[i].codigo; i++)
            ;
        if (codigo == tabela[i].codigo && codigo != 0)
            printf("A profissão é %s\n", tabela[i].profissao);
        else if (codigo != 0)
            puts("Código não cadastrado.");
        else
            puts("Busca encerrada.");
    }
}
