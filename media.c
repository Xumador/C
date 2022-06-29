#include <stdio.h>

int main(){
    int i, aux, temp, med;
    aux=0;
    temp=0;
    while(i!=0){
        scanf("%d", &i);
        temp=temp+i;
        aux++;
    }
    med=temp/(aux-1);
    printf("%d\n",med);
}
