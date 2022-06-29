#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int numero, palpite, i;

    i=0;

    while(i == 0){
        numero = rand() % 10;
        puts("\nAdvinhe o numero magico [0..9]");
        scanf("%d", &palpite);
            if (palpite == numero){
                puts("\nACERTOU !");
                i=1;
            }
            else{
                printf("\nErrou, o numero era %d!!\n", numero);
            }
    }
}
