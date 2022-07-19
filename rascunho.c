#include <stdio.h>

int main(void)
{
    int VENDAS[40][20], valorPROD, valorVEND, totalPROD, totalVEND;
    int prod, vend, a, b, p, v, aux = 0;
    totalPROD = 0;
    totalVEND = 0;

    printf("Tabela de Vendas (p = produto, v = vendedor)\n");

    scanf("%d %d", &a, &b);

    while (aux < b)
    {
        printf("v%d ", aux + 1);
        aux++;
    }
    printf("\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            VENDAS[i][j] = 0;
        }
    }

    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < b; j++)
        {
            scanf("%d %d %d", &v, &p, &valorPROD);
            if (v > a || p > b)
            {
                break;
            }
            else
            {
                if (p == 0 || v == 0)
                {
                    break;
                }
            }
            VENDAS[i][j] = valorPROD;

            if (p != (j + 1))
            {
                VENDAS[i][p] = valorPROD;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", VENDAS[i][j]);
        }
        printf("\n");
    }
}