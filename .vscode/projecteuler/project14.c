#include <stdio.h>
long long collatzsteps(int m){
    long long n=m;
    long long ctr=0;
    while(n!=1){
        ctr++;
        n=(n%2==0)?n/2:(3*n+1);
    }
    return (ctr+1);
}
int main() {
    long long maxsteps=1;
    long long var;
    int max=1;
    for(int i=1;i<1000000;i++){
        var=collatzsteps(i);
        if(var>maxsteps){
            max=i;
            maxsteps=var;
        }
    }
    printf("\n\n%d",max);

    return 0;
}