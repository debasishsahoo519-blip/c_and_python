#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

int main() {
    bool b=false;
    int n;
    while (b==false){
        n = rand();
        if (n<1000){
          b=true;
        }

    }
    int guess;
    
    printf("guess the integer number from 1 to 1000\n");
    for ( int i=1;i>0;i++){
        printf("enter ur guess\n");
        scanf("%d",&guess);
        if (guess>n){
            printf(" your guess is too high\n");
        }
        if (guess<n){
            printf(" ur guess is too low\n");
        }
        if(guess==n){
            printf("congratulations in %d tries",i);
            break;
        }
    }
    return 0;
}

