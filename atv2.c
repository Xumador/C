#include <stdio.h>

int main(void) {
  int vendas[40][20], somaLinha[40], somaCol[20], soma, vprod, a, b, p, v,
      x = 1, y = 1, i, j, z = 1, w = 1, t = 1;
  char k = 'v';

  scanf("%d %d", &a, &b);
  for (i = 1; i <= a; i++) {
    for (j = 1; j <= b; j++) {
      vendas[i][j] = 0;
    }
  }

  scanf("%d %d %d", &v, &p, &vprod);
  vendas[p][v] = vprod;
  while (p != 0 && v != 0 && vprod != 0) {
    scanf("%d %d %d", &v, &p, &vprod);
    vendas[p][v] = vprod;
  }
  for (i = 1; i <= a; i++) {
    soma = 0;
    for (j = 1; j <= b; j++) {
      soma += vendas[i][j];
    }
    somaLinha[i] = soma;
  }

  for (j = 1; j <= b; j++) {
    soma = 0;
    for (i = 1; i <= a; i++) {
      soma += vendas[i][j];
    }
    somaCol[j] = soma;
  }

  printf("Tabela de Vendas (p = produto, v = vendedor)\n");
  printf("    ");
  while (x <= b) {
    printf("%9c%d", k, x);
    x++;
  }
  printf("\n");
  printf("    +");
  while (z <= b) {
    printf("----------");
    z++;
  }
  printf("+");
  printf("\n");
  for (i = 1; i <= a; i++) {
    printf(" p%d |", y);
    y++;
    for (j = 1; j <= b; j++) {
      printf("%7d.00", vendas[i][j]);
    }
    printf("|");
    printf("%7d.00", somaLinha[i]);
    printf("\n");
  }
  printf("    +");
  while (w <= b) {
    printf("----------");
    w++;
  }
  printf("+");
  printf("\n");
  printf("     ");
  for (j = 1; j <= b; j++)
    printf("%7d.00", somaCol[j]);
}
