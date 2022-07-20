#include <stdio.h>
#include <math.h>

int main()
{
    float raio, volume;
    printf("|  raio  |  volume  |\n");
    for (raio = 0; raio <= 20; raio += 0.5)
    {
        volume = (4.0 / 3.0) * M_PI * pow(raio, 3);
        printf("%8.2f cm | %8.2f cm3\n", raio, volume);
    }
}
