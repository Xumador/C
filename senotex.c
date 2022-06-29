#include <stdio.h>

int main(){
    int n, i, num;
    scanf("%d", &n);
    i=1;
    num=1;
    printf("sen(x) = ");
    do{
        if(num==1){
            printf("x ");
        }
        else{
            if((i%2)==0)
                printf("- \\frac{x^%d}{%d!} ",num,num);
            else
                printf("+ \\frac{x^%d}{%d!} ",num,num);
        }
        i=i+1;
        num=num+2;
    }while(i<=n);
}
