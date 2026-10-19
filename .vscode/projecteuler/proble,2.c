#include <stdio.h>

int main() {
    int n=1;
    int m=1;
    int sum=0;
    int sum2=0;
    while(sum<4000000){
        sum=n+m;
        if(sum%2==0){
            sum2+=sum;
        }
        n=m;
        m=sum;

    }
    printf("\n%d",sum2);
    return 0;
}