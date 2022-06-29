#include <stdio.h>

int main()
{

    float x, y, area;
    printf("insira as coordenadas: ");
    scanf("%f %f", &x, &y);
    if (x == 0 || y == 0)
    {
        printf("Não tem triangulo\n");
    }
    while (x != 0 || y != 0)
    {
        area = (-x / y * x) / 2;
        if (area < 0)
        {
            area = -area;
        }
        printf("area: %f\n", area);
        x = 0;
        y = 0;
    }
}
