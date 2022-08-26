#include <stdio.h>
int main()
{
  int v[10] = {1, 2, 3, 4, 5, 6, 0, 8, 9, 10};
  int *p;
  p = v;
  for (; *p; p++)
     printf("%d\n", *p % 10 ? *p : 123);
}
