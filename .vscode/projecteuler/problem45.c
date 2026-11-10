#include <stdio.h>
#include <math.h>

//only problems i faced is integer overflows
int is_pentagonal(long long num);
int is_hexagonal(long long num);

int main() {
    long long n=286;
    while(1){
        long long t = n*(n+1)/2;
        if(is_pentagonal(t) && is_hexagonal(t)){
            printf("%lld\n", t);
            break;
        }
        n++;
    }
    return 0;
}
int is_pentagonal(long long num){
    double d=(1+sqrt(1+24*num))/6;
    double b=d-(long long)d;
    if (b==0){
        return 1;
    }
    return 0;
}
int is_hexagonal(long long num){
    double d=(1+sqrt(1+8*num))/4;
    double b=d-(long long)d;
    if (b==0){
        return 1;
    }
    return 0;

}

// note a better way to do this is by generating only hexagonal umbers , as they are already triangular