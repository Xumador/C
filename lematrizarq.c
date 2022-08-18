#include <stdio.h>
#include <stdlib.h>

typedef int matriz[100][100];
int main() {
  FILE *arq;
  matriz matA, matB, matC;
  int nlA, ncA, nlB, ncB;
  if ((arq = fopen("matriz.txt", "rt")) == NULL) {
    puts("Erro na abertura");
    exit(10);
  }
  fscanf(arq, "%d %d", &nlA, &ncA);
  for (int i = 0; i < nlA; i++)
    for (int j = 0; j < ncA; j++) {
      fscanf(arq, "%d", &matA[i][j]);
    }
  fscanf(arq, "%d %d", &nlB, &ncB);
  for (int i = 0; i < nlB; i++)
    for (int j = 0; j < ncB; j++) {
      fscanf(arq, "%d", &matB[i][j]);
    }
  if (ncA != nlB) {
    puts("Não é possivel multiplicar");
    exit(20);
  }
  fscanf(arq, "%d %d", &nlB, &ncB);
  for (int i = 0; i < nlB; i++)
    for (int j = 0; j < ncB; j++) {
      int soma = 0;
      for (int k = 0; k < ncA; k++)
        soma = soma + matA[i][k] * matB[k][j];
      matC[i][j] = soma;
    }
  for (int i = 0; i < nlA; i++) {
    for (int j = 0; j < ncB; j++) {
      printf("%3d ", matC[i][j]);
    }
    printf("\n");
  }
  fclose(arq);
}
