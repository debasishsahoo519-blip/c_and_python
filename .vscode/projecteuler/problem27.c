#include <stdio.h>
int primecheck(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/i;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int k=1;
    int promax=1;
    int result=0;
    int kmax=1;
    for(int a=-999;a<=999;a++){
        for(int b=-1000;b<=1000;b++){
            k=0;
            while(true){
                result=k*k+a*k+b;
                if(primecheck(result)==0){
                    break;
                }else{
                    k++;
                }

            }
            if(k>kmax){
                kmax=k;
                promax=a*b;
            }

        }
    }
    
    printf("%d",promax);
    return 0;
}