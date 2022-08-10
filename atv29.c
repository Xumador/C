#include <stdio.h>
#include <stdlib.h>

int main()
{

  int qtd, *valores;
  float mediana;

  puts("Digite a quantidade de valores: ");
  scanf("%d", &qtd);
  valores = malloc(qtd * sizeof(int));

  printf("Insira os %d valores: \n", qtd);

  for (int i = 0; i < qtd; i++)
  {
    scanf("%d", &valores[i]);
  }

  if (qtd % 2 != 0)
    mediana = valores[((qtd + 1) / 2) - 1];
  else
    mediana = (valores[(qtd) / 2] + valores[((qtd / 2) - 1)]) / 2;

  for (int i = 0; i < qtd; i++)
  {
    printf("%d ", valores[i]);
  }

  printf("\n");

  printf("A mediana dos valores é: %.2f\n", mediana);

  free(valores);

  return 0;
}
