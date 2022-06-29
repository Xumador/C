
#include <stdio.h>

int main(){
    int num, max, min, i;
    max=0;
    i=0;
    while(i<10){
    puts("Digite os valores:");
    scanf("%d\n", &num);
    min=num;
    if(max<num){
        max=num;
    }
    else{
        if(num<min){
        min=num;
        }
        else{
            if(num<0){
                puts("ERRO");
            }

        }
    }
    i++;
}
    printf("o menor foi %d e o maior %d", min, max);
}
