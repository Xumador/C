#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *arq;
  char dados[16];
  arq = fopen("ex41.txt", "r");
  if (arq == NULL) {
    puts("Não foi possivel abrir o arquivo.");
    exit(10);
  } else {
    puts("Arquivo aberto!");
    for (int i = 0; i < 16; i++) {
      fscanf(arq, "%c", &dados[i]);
    }
    for (int i = 0; i < 11; i++) {
      if (dados[i] == ' ') {
        printf(" ");
      } else
        printf("%c", dados[i] - 32);
    }
    printf("\n");
  }
  fclose(arq);
  return 0;
}
