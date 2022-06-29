#include <stdio.h>

int main()
{
    int n;
    float num,den,s;
    num = 1000;
    s = 0;
    den = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        s = s + num / den;
        num--;
        den++;
    }
    printf("%.2f\n", s);
}
