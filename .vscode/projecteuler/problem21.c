#include <stdio.h>
int sum_divisors(int n){
    int sum=0;
    if(n==1){
        return -67;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n){
                sum+=i;
                continue;
            }
            sum+=i+n/i;
        }
    }
    return (sum+1);
}
int main() {
   
    int ar[10000];
    for (int i=0;i<10000;i++){
        ar[i]=i+1;
    }
    int sum2=0;
    int result=0;
    for(int i=3;i<10000;i++){
        if(ar[i]==0){
            continue;
        }
        result=sum_divisors(ar[i]);
        if(sum_divisors(result)==ar[i]&&result!=ar[i]){
            sum2+=ar[i];
            if(result<=10000){
                sum2+=result;
                ar[result-1]=0;

            }
        }
    }
    printf("%d",sum2);
    return 0;
}