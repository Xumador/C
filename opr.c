#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, y, sum, sub, mul, div;
  scanf("%d %d", &x, &y);
        sum = x + y;
        sub = x - y;
        mul = x * y;
        div = x / y;
        printf("%d + %d = %d\n", x, y, sum);
        printf("%d - %d = %d\n", x, y, sub);
        printf("%d x %d = %d\n", x, y, mul);
        printf("%d / %d = %d\n", x, y, div);
}
