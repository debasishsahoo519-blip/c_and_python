#include <stdio.h>
#include <stdbool.h>
int main() {
    int n=1;
    char c;
    while(true){
        printf("%d\n", n);
        scanf(" %c",&c);
        if(c=='y'){
            n*=2;
        }else if(c=='n'){
            break;
        }else{
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }
    return 0;
}