#include <stdio.h>
#include <math.h>

int main() {
    int i=1000;
    int a,b,c,d;
    double a_,b_,c_,d_,e;
    printf("hey");
    while(i<=9999){
        a=i%10;
        b=(i%100-a)/10;
        c=(i%1000-b*10-a)/100;
        d=i/1000;
        a_=a;
        b_=b;
        c_=c;
        d_=d;
        e=i;
        if (e==pow(d_,c_)*pow(b_,a_)){
            printf("%d",i);
        }
        i++;
    }
    return 0;
}