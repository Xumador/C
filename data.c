#include <stdio.h>

struct data
{
    int dia;
    char mes[4];
    int ano;
};

// int ndias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// char *meses[12] = {"jan", "fev", "mar", "abr", "maio", "jun", "jul", "ago", "set", "out", "nov", "dec"};

struct 
{
    char nome[4];
    int ndias;
} calendario[12] = {

    "jan", 31,
    "fev", 28,
    "mar", 31,
    "abr", 30,
    "maio", 31,
    "jun", 30,
    "jul", 31,
    "ago", 31,
    "set", 30,
    "out", 31,
    "nov", 30,
    "dez", 31};

int main()
{
    // for(int i=0;i<12;i++)
    // printf("%s %d\n", meses[i], ndias[i]);

    struct data dt;
    int i;
    do
    {
        printf("\nDigite a data: ");
        scanf("%d %s %d", &dt.dia, dt.mes, &dt.ano);
        printf("%d/%s/%d\n", dt.dia, dt.mes, dt.ano);
        for (i = 0; i < 12 && strcmp(dt.mes, calendario[i].nome); i++)
            ;
        if (i >= 12)
            puts("Data Incorreta");
        else
        {
            if (dt.dia < 1 || dt.dia > calendario[i].ndias)
                puts("Data Incorreta");
            else if (dt.ano != 1985)
                puts("Data Incorreta");
        }
    } while (dt.dia != 0 || strcmp(dt.mes, "jan") || dt.ano != 0);
}
