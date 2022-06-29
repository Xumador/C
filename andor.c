#include <stdio.h>

int main(void){
    int d;
    scanf("%d", &d);
    if(d>0 && d<5){
        printf("positive AND <5: %d\n", d);
    }
    else{
        if(d<0 || d>10){
            printf("negative OR >10: %d\n", d);
        }
    }
}
