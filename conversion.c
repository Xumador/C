
#include <stdio.h>

int main() {
  float far, cent;
  printf(" Farenheit | Centígrado\n");
  printf("-----------+-------------\n");
  far = 50;
  cent = 0;
  while (far <= 150) {
    cent = (5 * (far - 32)) / 9;
    if (far >= 100) {
      printf("  %.2f   |    %.2f      \n", far, cent);
    } else {
      printf("   %.2f   |    %.2f      \n", far, cent);
    }
    far = far + 5;
  }
}
