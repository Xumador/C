#include <stdio.h>

int main(){
  int temp, maior, menor, x;
  maior=0;
  temp=0;
  while(temp<10){
    scanf("%d", &x);
    if(x>maior){
        maior=x;
    }
    else{
        if(x<menor && x>0){
            menor=x;
        }
        else{
            if(x<0){
                error = x;
            }
        }
    }
    temp++;
  }
    printf("dos 10 valores positivos lidos, o maior foi %d e o menor %d", maior, menor);
    printf("entrada %d invalida\n", error);
  
}
