#include <stdio.h>
int main()
{
    int n, a, b, c, aux, invertido, conta, caso = 0;
    for (n = 123; n <= 987; n++)
    {
        aux = n % 10;
        a = aux;
        aux = n / 10;
        b = aux % 10;
        aux = aux / 10;
        c = aux % 10;
        invertido = (a * 100) + (b * 10) + (c * 1);
        if ((a != b && a != c && b != c) && (a != 0 && b != 0 && c != 0))
        {
            if (invertido < n)
            {
                conta = n - invertido;
                caso++;
                printf("caso %3.d: %d-%d=%3.d\n", caso, n, invertido, conta);
            }
            else
            {
                conta = invertido - n;
                caso++;
                printf("caso %3.d: %d-%d=%3.d\n", caso, invertido, n, conta);
            }
        }
    }
    
return 0;
}
