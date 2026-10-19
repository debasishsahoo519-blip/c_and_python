#include <stdio.h>

int main() {
    long long m=28;
  int ctr=0;
    long long d=m/2;
    for(long long i=1;i*i<=m;i++){
        if(i*i==m){
            ctr++;
        }
        else if(m%i==0){
            ctr+=2;
        }
        

    }
    printf("%d",ctr);
}