#include <stdio.h>

int main(){
    int n, fat, aux;
    fat = 1;
    scanf("%d", &n);
    for(; n>0; n--){
        printf("%d*%d=", n,fat);
        fat = fat*n;
        aux=fat;
        printf("%d\n", aux);
    }
}
