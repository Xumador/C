#include <stdio.h>

int main(void) {
  int mat[4][5], soma[4], somaL[5], valor, a, b, aux = 0, aux1 = 0, aux2 = 0,
                                                 somatorio, somatorio2;
  //preenchimento
  scanf("%d %d", &a, &b);
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      scanf("%d", &valor);
      mat[i][j] = valor;
    }
  }
  while(aux<b){
    printf("+-----");
    aux++;
  }
  printf("+");
  printf("\n");
  //impressão
  for (int i = 0; i < a; i++) {
    somatorio = 0;
    for (int j = 0; j < b; j++) {
      somatorio = somatorio + mat[i][j];
      printf("|%4d ", mat[i][j]);
      if (j == b - 1) {
        printf("|");
        printf("  %3d", somatorio);
        printf("\n");
        while(aux1<b){
          printf("+-----");
          aux1++;
        }
        printf("+");
        printf("\n");
      }
    }
  }
}
