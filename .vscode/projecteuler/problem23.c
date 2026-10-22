#include <stdio.h>

int sum_divisors(int n){
    int sum=0;
    if(n==1){
        return 0;
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

int main(){
    int ar[6965];
    int ctr=0;
    for(int i=2;i<28124;i++){
        if(sum_divisors(i)>i){
            ar[ctr]=i;
            ctr++;
        }
    }
    int ar2[28123];
    for(int i=0;i<28123;i++){
        ar2[i]=i+1;
    }
    for(int i=0;i<6965;i++){
        for(int j=i;j<6965;j++){
            int sum=ar[i]+ar[j];
            if(sum<28124){
                ar2[sum-1]=0;
            }else{
                break;
            }
        }
    }
int sumx=0;
for(int i=0;i<28123;i++){
    sumx+=ar2[i];
}
printf("%d",sumx);
    
}