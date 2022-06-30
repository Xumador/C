#include <stdio.h>
#include <math.h>

int main()
{
    double soma, n, elev, den, ntermos;
    elev = 0;
    den = 1;
    soma = 0;
    ntermos = 1;
    scanf("%lf", &n);
    while ((soma - exp(n)) > 0.001)
    {
        soma = soma + pow(n, elev) / den;
        ntermos++;
        den++;
        den = den * ntermos;
    }
    printf("%lf %lf", soma, exp(n));
    printf("%lf", ntermos);
}