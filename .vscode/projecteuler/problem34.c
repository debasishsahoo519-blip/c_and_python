#include <stdio.h>
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int pro=1;

    for(int i=1;i<=n;i++){
        pro*=i;
    }
    return pro;
}

int main() {
    int sum=0;
    int digit=0;
    int sum2=0;
    int temp=0;
    

    for(int i=10;i<10000000;i++){
        sum=0;
        temp=i;
        while(temp!=0){
            digit=temp%10;
            sum+=factorial(digit);
            temp/=10;
        }
        if(sum==i){
            sum2+=i;

        }
    }
    printf("%d",sum2);
    
    return 0;
}