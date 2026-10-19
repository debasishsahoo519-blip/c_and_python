#include <stdio.h>
int checkprime(long long m){
    for(long long i=2;i*i<=m;i++){
        if(m%i==0){
            return 0;
        }
    }
    return 1;
}
int main() {
    long long n=600851475143;
    // why are u suggesting i+=2 instead
    int sum=0;
    for(long long i=3;i<=n;i+=2){//only odd numbers as primes are odd
         if(n%i==0 && (checkprime(i)==1)){
            while(n%i==0){
                n=n/i;
            }
            sum=i;
    }
    
    
}

printf("\n%d",sum);
return 0;
}
