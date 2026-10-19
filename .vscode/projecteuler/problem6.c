#include <stdio.h>

int main() {
    int n=100;
    int result=n*(3*n+2)*(n*n-1);
    result=result/12;
    printf("\n%d",result);
    return 0;
}