#include <stdio.h>


int main() {
    int ctrmax=1;
    int ctr=1;
    int k=0;
    int rem=0;
    int dmax=2;
    for(int i=2;i<1000;i++){
        if(i%2==0||i%5==0){
            continue;
        }

    
        ctr=0;
        rem=-67;
        k=1;
        while(rem!=1){
            k*=10;
            rem=k%i;
            ctr++;
            k=rem;

        }
        if(ctr>ctrmax){
            ctrmax=ctr;
            dmax=i;

        }
        
    }
    printf("%d",dmax);

    
    return 0;
}