#include <stdio.h>

int main() {
    int n=1;
    char c;
    while(true){
        printf("%d\n",n);
        //scanf("%c",&c);
        scanf(" %c",&c);
        if(c=='y'){
            n*=2;
        }else if(c=='n'){
            break;
        }else{
            printf("invalid input\n");
        }
    }
    return 0;
}