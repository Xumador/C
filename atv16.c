
#include <stdio.h>

int main(void) {
  int A[20][20],n;

  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      scanf("%d", &A[i][j]);
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if (A[i][j] != A[j][i]){
        printf("Não é simétrica\n");
        return 0;
      }
    }
  }
  printf("A matriz é simétrica");
  return 0;
}
