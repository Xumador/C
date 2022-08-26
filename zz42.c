#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *arq;
  int dados[12], tmp = 0;
  arq = fopen("ex42.txt", "r");
  if (arq == NULL) {
    puts("Não foi possivel abrir o arquivo.");
    exit(10);
  } else {
    puts("Arquivo aberto!");
    for (int i = 0; i < 12; i++) {
      fscanf(arq, "%d", &dados[i]);
      tmp = tmp + dados[i];
    }
    printf("Soma: %d\n", tmp);
    printf("\n");
  }
  fclose(arq);
  return 0;
}
