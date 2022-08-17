#include <stdio.h>

int main(void)
{
    // Digite o seu código aqui
    int m, n, o, p, valor, i, mA[100][100], mB[100][100], mC[100][100];
    scanf("%d %d", &o, &p);
    valor = 0;
    for (i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            mA[i][j] = valor;
            valor++;
        }
    }
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mB[i][j] = valor;
            valor++;
        }
    }
    if (o == n)
    {
        for (i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mC[i][j] = (mA[i][j]) * (mB[i][j]);
            }
        }
        puts("Matriz A");
        for (i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", mA[i][j]);
            }
            printf("\n");
        }
        puts("Matriz B");
        for (i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", mB[i][j]);
            
            }
            printf("\n");
        }
        puts("Matriz C = A x B");
        for (i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", mC[i][j]);
            }
            printf("\n");
        }
    }
    else
        puts("Não é possível multiplicar as matrizes.");

    return 0;
}
