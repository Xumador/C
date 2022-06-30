#include <stdio.h>

int main()
{
    double soma, num, den, somaAnt, ntermos;
    soma = 63;
    somaAnt = 0;
    num = 61;
    den = 1;
    ntermos = 1;
    while (soma - somaAnt > 0.000001)
    {
        somaAnt = soma;
        soma = somaAnt + (num / den);
        num = num - 2;
        ntermos++;
        den = den * ntermos;
        den++;
        }
    printf("%.10lf %.lf\n", soma, ntermos);
}