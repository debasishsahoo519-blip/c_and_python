#include <stdio.h>

int main() {
    //doing this for only odd numbers
    int sum=0;
    int n=1001;
    for(int i=3;i<=n;i+=2){
        sum+=i*i;

    }
    for(int i=2;i<=n-1;i+=2){
        sum+=i*i+1;

    }
    for(int i=2;i<=n-1;i+=2){
        sum+=i*i+i+1;
    }
    for(int i=2;i<=n-1;i+=2){
        sum+=i*i-(i-1);
    }
    printf("%d",sum+1);
    return 0;
}