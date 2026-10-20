#include <stdio.h>
long long fact(int n){
    long long pro=1;
    for(long long i=1;i<=n;i++){
        pro*=i;
    }
    return pro;
}
int main() {
    long long result=fact(100);
    long long temp =result;
    long long sum=0;
    while(temp!=0){
        sum+=temp%10;
        temp/=10;
    }
    printf("%d",sum);
    return 0;
}