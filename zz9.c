#include <math.h>
#include <stdio.h>
#define PI 3.141592654

int fatorial(int a) {
  int x, fact = 1;
  for (x = 1; x <= a; x++)
    fact = fact * x;
  return 0;
}
int main(void) {
  // Coloque o seu código aqui
  int aux2 = 0, fat;
  float resultado, aux = 0, diferença, final = 0.0;
  double n, i = 2.00;
  scanf("%lf", &n);
  aux = n;
  aux = (aux * PI) / 180;
  resultado = cos(aux);
  while (i < 20.00) {
    fat = fatorial(i);
    diferença = ((n * n) * i) / fat;
    aux2 = aux2 + diferença;
    i += 2.00;
  }
  final = (resultado - (1.00 - aux2));
  printf("%f\n", aux);
  printf("%f\n", resultado);
  printf("cos(%.2lf) - serie = %.2f\n", n, final);
}
