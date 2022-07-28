#include <stdio.h>

int main()
{
    int vetor[8] = {20, 10, 40, 80, 30, 50, 60, 70};

    for (int i = 0; i < 8 - 1; i++)
    {

        int tmp, menor = i;
        for (int j = i + 1; j < 8; j++)
            if (vetor[j] < vetor[menor])
                menor = j;
        tmp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = tmp;
    }

    for (int i = 0; i < 8; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}